#include <iostream>
#include <vector>
using namespace std;
/*
0:{}
1:{2,6}
2:{1,3,4}
...
...
*/
void displayVec1D(vector<int> &v)
{
    cout << " The size of vector is " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << " " << v[i] << " ";
    }
    cout << endl;
}
void addVertices(int nodes,vector<vector<int>> &adj){
        adj.resize(nodes);

    }
     void addEdge(int src, int dest, vector<vector<int>> &adj, bool isDirected)
    {
        // Add the destination to the adjacency list of the
        // source
        adj[src].push_back(dest);
        // If the graph is undirected
        if (!isDirected) {
            // Add the source to the adjacency list of the
            // destination
            adj[dest].push_back(src);
        }
    }
    void printGraph(vector<vector<int>> &adj)
    {
        // Iterate through each vertex
        for (int i = 0; i < adj.size(); ++i) {
            // Print the vertex
            cout << i << ": ";
            // Iterate through the adjacency list of the
            // vertex
            for (int j = 0; j < adj[i].size(); ++j) {
                // Print each adjacent vertex
                cout << adj[i][j] << " -> ";
            }
            // Indicate the end of the adjacency list
            cout << "NULL" << endl;
        }
    }
int main() {
    cout << "Creating and traversing a graph" << endl;
    // cout<<" Enter the node n and edges m " <<endl;
    // int node,edge;
    // cin>>node>>edge;
    vector<vector<int>> adj;
    bool isDirected=true;
    addVertices(5,adj);
    addEdge(0, 1,adj,isDirected);
    addEdge(0, 2,adj,isDirected);
    addEdge(1, 2,adj,isDirected);
    addEdge(1, 3,adj,isDirected);
    addEdge(1, 4,adj,isDirected);
    printGraph(adj);
    // Striver code [bad idea]
    // for (int i = 1; i < edge+1; i++)
    // {
    //     int u,v;
    //     cout<<"Enter the edge for node at "<<i<<endl;
    //     cin>>u>>v;
    //     adj[u].push_back(v);
    //     adj[v].push_back(u);
    // }

    
    
    
return 0;
}