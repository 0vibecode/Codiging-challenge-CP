#include <iostream>
#include <vector>
using namespace std;

void displayVec1D(vector<int> &v){
    cout<<" The size of vector is "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<" "<<v[i]<< " ";
    }
    cout<<endl;
}
void dataIn1D(int N, vector<int> &v){
    for (int i = 0; i < N; i++)
    {
        int temp;
        cout<<"Insert the value of element at index "<<i<<endl;
        cin>>temp;
        v.push_back(temp);
        cout<<" The value pushed at index "<<i<< " is "<<temp<<endl;
    }
}
/*
    v1[0]: [vector elements]
    v1[1]: [vector elements]
    v1[2]: [vector elements]
    ...
    ...
    ...
    v1[N]: [vector elements]
    */
int main() {
    cout << "Nested Vectors" << endl;
    // int N;
    // cout<<" Enter the number of element in array "<<endl;
    // cin>>N;
    int n,m;
    cout<<"Enter the value of n,m"<<endl;
    cin>>n>>m;
    int a[n][m];// Normal array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp;
            cout<<"Insert the value at index a["<<i<<"]"<<"["<<j<<"] "<<endl;
            cin>>temp;
            a[i][j] = temp;
        }
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"Display the value at index a["<<i<<"]"<<"["<<j<<"] "<<" "<<a[i][j]<< " "<<endl;
            
            
        }
    }   

    
    
    

return 0;
}