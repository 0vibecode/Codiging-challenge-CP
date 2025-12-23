#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Iterators in C++ STL" << endl;
    vector<int> v1 = {2,3,5,6,11,3,2,4};
    vector<int> :: iterator it;
    it = v1.begin();
    for (it; it != v1.end(); it++)
    {
        cout<<" "<<it<<" ";
    }
    
return 0;
}