#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Iterators using AUTO in C++ STL" << endl;
    vector<int> v1 = {2,3,5,6,11,3,2,4};
    // vector<int> :: iterator it;
    
    auto it = v1.begin();  // automatic type deduction in C++
    for (it; it != v1.end(); it++)
    {
        cout<<" "<<*it<<" ";
    }
    
return 0;
}