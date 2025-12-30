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
    vector<int> v1[4];
    v1[0]= {2,5,7,9};
    displayVec1D(v1[0]);
    v1[1]= {12,15,17,19,11};
    displayVec1D(v1[1]);
    v1[2]= {22,25,27};
    displayVec1D(v1[2]);
    // last one is zero
    displayVec1D(v1[3]);
    
    
    

return 0;
}