#include <iostream>
#include <vector>
#include <queue>
#include <limits>

class WeightedGraph {
private:
    int vertices;
    std::vector<std::vector<std::pair<int, int>>> adjList;

public:
    WeightedGraph(int v) : vertices(v), adjList(v) {}

    // Function to add a weighted edge to the graph
    void addEdge(int v, int w, int weight) {
        adjList[v].emplace_back(w, weight);
        adjList[w].emplace_back(v, weight); // For an undirected graph
    }

    // Dijkstra's Algorithm for finding the shortest path from a start node
    void dijkstra(int start) {
        std::vector<int> dist(vertices, std::numeric_limits<int>::max());
        dist[start] = 0;

        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
        pq.push({0, start});

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            for (const auto& neighbor : adjList[u]) {
                int v = neighbor.first;
                int weight = neighbor.second;

                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    pq.push({dist[v], v});
                }
            }
        }

        std::cout << "Shortest distances from node " << start << ":\n";
        for (int i = 0; i < vertices; ++i) {
            std::cout << "Node " << i << ": " << dist[i] << '\n';
        }
    }
};

int main() {
    WeightedGraph weightedGraph(6);

    // Adding weighted edges to the graph
    weightedGraph.addEdge(0, 1, 2);
    weightedGraph.addEdge(0, 2, 4);
    weightedGraph.addEdge(1, 2, 1);
    weightedGraph.addEdge(1, 3, 7);
    weightedGraph.addEdge(2, 4, 3);
    weightedGraph.addEdge(3, 4, 1);
    weightedGraph.addEdge(3, 5, 5);
    weightedGraph.addEdge(4, 5, 2);

    // Perform Dijkstra's Algorithm starting from node 0
    weightedGraph.dijkstra(0);

    return 0;
}
    // The WeightedGraph class represents a weighted, undirected graph using an adjacency list.
    // addEdge is used to add weighted edges to the graph.
    // dijkstra is a function that implements Dijkstra's algorithm to find the shortest paths from a start node to all other nodes.
    // The graph is then created with weighted edges, and Dijkstra's algorithm is applied starting from node 0.