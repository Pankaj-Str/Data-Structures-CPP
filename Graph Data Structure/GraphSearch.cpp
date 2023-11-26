// DFS = Depth First Search
// BFS = Breadth First Search

#include<iostream>
#include<vector>
#include<queue>
#include<stack>

using namespace std;

class Graph{

    public : int vertices;
    
    vector< vector<int> > adjList;

    Graph(int V) : vertices(V),adjList(V){}

    void addEdge(int u,int v){
        adjList[u].push_back(v);
    }

    // depth- first search

    void DFS(int start){
        vector<bool> visited(vertices,false);
        stack<int> stk;

        stk.push(start);

        while(!stk.empty()){
            int current = stk.top();
            stk.pop();

            if(!visited[current]){
                cout<<current<<" ";
                visited[current] = true;
            }

            for(int neighbor : adjList[current]){

                if(!visited[neighbor]){
                    stk.push(neighbor);
                }
                
            }
            cout<<endl;
        }
    }

    // Breadth - first search

    void BFS(int start){
        vector<bool> visited(vertices,false);
        queue<int> q;

        q.push(start);
        visited[start] = true;

        while(!q.empty()){
            int current = q.front();
            q.pop();

            cout<< current <<" ";

            for(int neighbor : adjList[current]){

                if(!visited[neighbor]){
                    q.push(neighbor);
                    visited[neighbor]= true;
                }
                
            }
            cout<<endl;
        }
    }
};
        int main(){
            //creating a graph with 5 vertices
            Graph g(5);

            // adding edges
            g.addEdge(0,1);
            g.addEdge(0,2);
            g.addEdge(1,3);
            g.addEdge(2,4);
            g.addEdge(3,4);

            cout<<"DFS Starting From Vertex 0 : ";
            g.DFS(1);

            cout<<"BFS Starting From Vertex 0 : ";
            g.DFS(2);
            
            

            return 0;
        }
    

