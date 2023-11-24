#ifndef DFS_H
#define DFS_H

#include <iostream>
#include <vector>
#include <stack>

/**
 * Depth-First Search (DFS) on Graph
 * 
 * This function performs a depth-first traversal of a graph.
 * It starts at the given starting node and explores as far as possible along 
 * each branch before backtracking.
 * 
 * @param graph The graph represented as adjacency lists (vector of vectors).
 * @param start The starting node for the DFS.
 * @param visited Array to keep track of visited nodes.
 */
void DFSUtil(const std::vector<std::vector<int> >& graph, int start, bool visited[]) {
    // Create a stack for DFS and push the starting node
    std::stack<int> stack;
    stack.push(start);

    while (!stack.empty()) {
        // Pop a vertex from the stack and print it
        start = stack.top();
        stack.pop();

        // Stack may contain the same vertex twice. So
        // we need to print the popped item only if it is not visited.
        if (!visited[start]) {
            std::cout << start << " ";
            visited[start] = true;
        }

        // Get all adjacent vertices of the popped vertex start
        // If an adjacent has not been visited, then push it to the stack.
        for (std::vector<int>::const_reverse_iterator it = graph[start].rbegin();
             it != graph[start].rend(); ++it) {
            if (!visited[*it]) {
                stack.push(*it);
            }
        }
    }
}

/**
 * Function to initialize DFS traversal
 * 
 * It calls DFSUtil() for all unvisited vertices.
 * 
 * @param graph The graph represented as adjacency lists (vector of vectors).
 * @param V Number of vertices in the graph.
 */
void DFS(const std::vector<std::vector<int> >& graph, int V) {
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Call the recursive helper function to print DFS traversal
    // starting from all vertices one by one
    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            DFSUtil(graph, i, visited);

    delete[] visited;
}

#endif // DFS_H
