# Breadth-First Search (BFS)

Breadth-First Search (BFS) is a traversal algorithm used for searching tree or graph data structures. It starts at a selected node (often the root in a tree), explores the neighbor nodes first, before moving to the next level of nodes.

## Algorithm Overview

BFS traverses the graph level by level. It uses a queue to keep track of the next location to visit.

1. **Start at a Selected Node**: Mark the starting node as visited and enqueue it.
2. **Explore Neighbors**: Dequeue a node from the queue and explore all its unvisited neighbors, marking them as visited and enqueuing them.
3. **Repeat**: Continue the process until the queue is empty.

## Characteristics

- **Non-Recursive**: BFS uses a queue and is non-recursive.
- **Shortest Path**: In unweighted graphs, BFS can find the shortest path between two nodes.
- **Level Order Traversal**: In trees, BFS performs a level order traversal.

## Use Cases

- **Finding Shortest Path**: Useful in unweighted graphs to find the shortest path.
- **Connectivity Check**: To check if there is a path between two nodes.
- **Broadcasting Networks**: In networking, BFS is used in broadcasting - sending data to all the nodes of a network.
- **Cycle Detection**: BFS can be used to detect cycles in a graph.

## Complexity

- **Time Complexity**: O(V + E), where V is the number of vertices and E is the number of edges in the graph.
- **Space Complexity**: O(V), due to the queue.

## Interactive Learning Resources

To better understand the BFS algorithm, here are some interactive resources:

1. [**Interactive BFS Exercises**](https://www.tutorialspoint.com/data_structures_algorithms/breadth_first_traversal.htm): Practice BFS on different graphs and understand its process.

2. [**Algorithm Visualizations**](https://www.cs.usfca.edu/~galles/visualization/BFS.html): Explore how BFS is implemented and works in different scenarios.

These resources provide a hands-on approach to learning the BFS algorithm, making it
