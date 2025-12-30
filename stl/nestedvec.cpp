#include <iostream>
#include <vector>
using namespace std;

void displayVec1D(vector<int> &v){
for (int i = 0; i < v.size(); i++)
    {
        cout<<" "<<v[i]<< " ";
    }
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
int main() {
    cout << "Nested Vectors" << endl;
    int N;
    cout<<" Enter the number of element in array "<<endl;
    cin>>N;
    vector<int> v1;
    dataIn1D(N,v1);
        
    displayVec1D(v1);
    
    

return 0;
}