#include <iostream>
#include <list>
using namespace std;

int main() {
    cout << "STL with List DS" << endl;
    list<int> l1;
    l1.push_back(25);
    l1.push_back(15);
    l1.push_back(45);
    l1.push_back(55);
    l1.push_back(65);
    list<int> ::iterator p;
    p = l1.begin();
    //cout<<"The value at index is "<<*(p+1)<<endl;  // cannot do this as its not like array and contigious memory location
    //cout<<"The value at index is "<<<<endl;  // cannot do this as its not like array and contigious memory location
    // for (int i = 0; i < l1.size(); i++)
    // {
    //     cout<<"The value at index "<<i<<" is "<<*(p.next())<<endl;
    // }
    
    for (p; p != l1.end(); ++p)
    {
        cout<<"The value is "<<*p<<endl;
    }
    
return 0;
}