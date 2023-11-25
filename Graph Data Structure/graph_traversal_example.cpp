//this time using Depth-First Search (DFS) to find connected components in an undirected graph
#include <iostream>
#include <vector>
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
        adjList[w].push_back(v); // For an undirected graph
    }

    // Function to find connected components using DFS
    void findConnectedComponents() {
        std::vector<bool> visited(vertices, false);
        int componentCount = 0;

        std::cout << "Connected Components:\n";
        for (int i = 0; i < vertices; ++i) {
            if (!visited[i]) {
                std::cout << "Component " << ++componentCount << ": ";
                DFS(i, visited);
                std::cout << '\n';
            }
        }
    }

private:
    // Recursive utility function for DFS
    void DFS(int node, std::vector<bool>& visited) {
        visited[node] = true;
        std::cout << node << " ";

        for (int neighbor : adjList[node]) {
            if (!visited[neighbor]) {
                DFS(neighbor, visited);
            }
        }
    }
};

int main() {
    Graph graph(9);

    // Adding edges to the graph to form multiple connected components
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 0);
    graph.addEdge(3, 4);
    graph.addEdge(5, 6);
    graph.addEdge(6, 7);
    graph.addEdge(8, 8);

    // Finding connected components using DFS
    graph.findConnectedComponents();

    return 0;
}

    // The Graph class represents an undirected graph using an adjacency list.
    // addEdge is used to add edges to the graph.
    // findConnectedComponents is a function that uses DFS to find and print connected components in the graph.
    // The graph is created with edges forming multiple connected components, and DFS is applied to find and print these components.