#include <iostream>
#include <vector>
using namespace std;
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
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<" "<<v1[i]<< " ";
    }
    
    

return 0;
}