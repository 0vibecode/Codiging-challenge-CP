#include <iostream>
#include <vector>
#include <array>
using namespace std;
void printMatrix(vector<vector<int>> &vec){ // Traversal of 2D vector
    for (size_t row = 0; row < vec.size(); ++row) {
        for (size_t col = 0; col < vec[row].size(); ++col) {
            cout << vec[row][col] << " ";
        }
        cout << endl;
    }
}
// Representation of matrix
// [
//  [1,2,3],
//  [2,5,3],
//  [6,2,3]
// ]
int main() {
cout << "Storing the graph DS" << endl;
    int n, m;
    cout << "Enter the number of nodes and edges of graph" << endl;
    cin >> n >> m;
    vector<vector<int>> adj(n+1, vector<int>(n+1, 0));  // Vector representation of 2D matrix
    cout<<"The number of nodes are "<<n << " and the number of edges are "<<m<<endl;
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cout<<" enter the name of the node u and v for edges "<<endl;
        cin>>u>>v;
        if (u >= 0 && u <= n && v >= 0 && v <= n) {  // Checking the nodes and edges to be positive
            adj[u][v] = 1;
            adj[v][u] = 1;
        }
    }
    printMatrix(adj);
    
return 0;
}