#ifndef BFS_H
#define BFS_H

#include <iostream>
#include <vector>
#include <queue>

/**
 * Breadth-First Search (BFS) on Graph
 * 
 * This function performs a breadth-first traversal of a graph.
 * It starts at the given starting node and explores the neighbor nodes 
 * at the present depth level, before moving on to nodes at the next depth level.
 * 
 * @param graph The graph represented as adjacency lists (vector of vectors).
 * @param start The starting node for the BFS.
 */
void BFS(const std::vector<std::vector<int> >& graph, int start) {
    // Number of vertices in the graph
    int V = graph.size();

    // Keep track of visited vertices
    std::vector<bool> visited(V, false);

    // Create a queue for BFS
    std::queue<int> queue;

    // Mark the current node as visited and enqueue it
    visited[start] = true;
    queue.push(start);

    while (!queue.empty()) {
        // Dequeue a vertex from queue and print it
        start = queue.front();
        std::cout << start << " ";
        queue.pop();

        // Get all adjacent vertices of the dequeued vertex start
        // If an adjacent has not been visited, then mark it visited and enqueue it
        for (int i = 0; i < graph[start].size(); i++) {
            int adjVertex = graph[start][i];
            if (!visited[adjVertex]) {
                visited[adjVertex] = true;
                queue.push(adjVertex);
            }
        }
    }
}

#endif // BFS_H
