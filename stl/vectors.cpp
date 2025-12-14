#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v){
    cout<<"The display of "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
int main() {
cout << "Vector in C++ from STL" << endl;
int element;
//int size;
//cout<<"Enter the size of Vector "<<endl;
//cin>>size;
vector<int> v1(3,7);
vector<int> :: iterator iter = v1.begin();  // iterator is a pointer to the first element of container.
//cout<<"The iterator value is "<<iter<<endl;
cout<<"The iterator value is "<<*iter<<endl;
v1.insert(iter+1,55);
cout<<"The iterator value is "<<*(iter+)<<endl;  // the value will not be updated for the iterator
//cout<<v1.size();
// for (int i = 0; i < (int)v1.size() ; i++)  // typecasting
// {
    //     cout<<"Enter the element at index "<<i<<endl;
    //     cin>>element;
    //     //v1.push_back(element);
    //     v1[i] = element;
    // }
    display(v1);
    vector<int> :: iterator iter1 = v1.begin();
    cout<<"The iterator1 value is "<<*(iter1+1)<<endl;
return 0;
}