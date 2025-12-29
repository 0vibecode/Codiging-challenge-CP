#include <iostream>
#include <vector>
using namespace std;

void displayVec1D(vector<int> &v){
for (int i = 0; i < v.size(); i++)
    {
        cout<<" "<<v[i]<< " ";
    }
}
int main() {
    cout << "Nested Vectors" << endl;
    int N;
    cout<<" Enter the number of element in array "<<endl;
    cin>>N;
    vector<int> v1;
    // v1.push_back(2);
    // v1.push_back(5);
    // v1.push_back(7);
    // vector<int> :: iterator it = v1.begin();
    // for ( it; it = ; i++)
    // {
    //     /* code */
    // }
    for (int i = 0; i < N; i++)
    {
        int temp;
        cout<<"Insert the value of element at index "<<i<<endl;
        cin>>temp;
        v1.push_back(temp);
        cout<<" The value pushed at index "<<i<< " is "<<temp<<endl;
    }
    
    displayVec1D(v1);
    
    

return 0;
}