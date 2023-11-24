#include <iostream>
#include <vector>
#include "DFS.h"

int main() {
    // Number of vertices in the graph
    int V = 4;

    // Create a graph given in the above diagram
    // Graph is represented as an adjacency list
    // An array of vectors to represent adjacency list
    std::vector<std::vector<int> > graph(V);

    // Add edges to the graph
    graph[0].push_back(1); // Add edge from node 0 to node 1
    graph[0].push_back(2); // Add edge from node 0 to node 2
    graph[1].push_back(2); // Add edge from node 1 to node 2
    graph[2].push_back(0); // Add edge from node 2 to node 0
    graph[2].push_back(3); // Add edge from node 2 to node 3
    graph[3].push_back(3); // Add edge from node 3 to node 3

    std::cout << "Depth First Traversal (starting from vertex 2): ";
    DFS(graph, V);
    std::cout << std::endl;

    return 0;
}
