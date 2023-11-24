#include <iostream>
#include <vector>
#include "BFS.h"

int main() {
    // Number of vertices in the graph
    int V = 5;

    // Create a graph given in the above diagram
    // Graph is represented as an adjacency list
    std::vector<std::vector<int> > graph(V);

    // Add edges to the graph
    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(2);
    graph[2].push_back(0);
    graph[2].push_back(3);
    graph[3].push_back(3);
    graph[4].push_back(1);

    std::cout << "Breadth First Traversal (starting from vertex 2): ";
    BFS(graph, 2);
    std::cout << std::endl;

    return 0;
}
