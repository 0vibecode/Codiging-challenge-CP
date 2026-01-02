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
    vector<vector<int>> v2; // 2D Vectors   
    // vector v2 --> v2[0] --> vector temp push_back
    vector<int> temp;
    temp.push_back(2);
    temp.push_back(3);
    temp.push_back(5);
    v2.push_back(temp);
    
    // v2.push_back(3);
    // v2.push_back(5);
    
    

return 0;
}