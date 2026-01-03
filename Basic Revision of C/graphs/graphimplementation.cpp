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
int main() {
    cout << "Creating and traversing a graph" << endl;
    cout<<" Enter the node n and edges m " <<endl;
    int node,edge;
    cin>>node>>edge;
    vector<int> adj[];
    for (int i = 1; i < edge+1; i++)
    {
        int u,v;
        cout<<"Enter the edge for node at "<<i<<endl;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // displayVec1D(adj);
    for (int  i = 0; i < adj.size(); i++)
    {
        
    }
    
    // for (auto it = adj.begin(); it != adj.end(); it++) {
    //     cout << *it << endl;
    // }
    
    // for (auto it: adj[node])
    // {
    //     int u,v;

    // }
    
return 0;
}