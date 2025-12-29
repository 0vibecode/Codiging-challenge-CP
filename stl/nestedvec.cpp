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
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(5);
    v1.push_back(7);
    // vector<int> :: iterator it = v1.begin();
    // for ( it; it = ; i++)
    // {
    //     /* code */
    // }
    displayVec1D(v1);
    
    

return 0;
}