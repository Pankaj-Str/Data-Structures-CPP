// Graph search techniques involve exploring or traversing a graph to find a particular node or to perform some operation on each node. Here's an example of graph search techniques, specifically using Depth-First Search (DFS) and Breadth-First Search (BFS) in C++.
// www.codeswithpankaj.com

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <unordered_set>

class Graph {
private:
    int vertices;
    std::vector<std::vector<int>> adjList;

public:
    Graph(int v) : vertices(v), adjList(v) {}

    // Function to add an edge to the graph
    void addEdge(int v, int w) {
        adjList[v].push_back(w);
        adjList[w].push_back(v);
    }

    // Depth-First Search (DFS)
    void DFS(int start) {
        std::cout << "DFS starting from node " << start << ": ";
        std::vector<bool> visited(vertices, false);
        DFSUtil(start, visited);
        std::cout << std::endl;
    }

    // Breadth-First Search (BFS)
    void BFS(int start) {
        std::cout << "BFS starting from node " << start << ": ";
        std::vector<bool> visited(vertices, false);
        std::queue<int> q;
        q.push(start);
        visited[start] = true;

        while (!q.empty()) {
            int current = q.front();
            q.pop();
            std::cout << current << " ";

            for (int neighbor : adjList[current]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }

        std::cout << std::endl;
    }

private:
    // Recursive utility function for DFS
    void DFSUtil(int node, std::vector<bool>& visited) {
        visited[node] = true;
        std::cout << node << " ";

        for (int neighbor : adjList[node]) {
            if (!visited[neighbor]) {
                DFSUtil(neighbor, visited);
            }
        }
    }
};

int main() {
    Graph graph(6);

    // Adding edges to the graph
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 4);
    graph.addEdge(3, 5);

    // Perform DFS starting from node 0
    graph.DFS(0);

    // Perform BFS starting from node 0
    graph.BFS(0);

    return 0;
 }
//     The Graph class represents an undirected graph using an adjacency list.
//     addEdge is used to add edges to the graph.
//     DFS and BFS are functions to perform Depth-First Search and Breadth-First Search, respectively.
//     The graph is then created, and DFS and BFS are performed starting from node 0.