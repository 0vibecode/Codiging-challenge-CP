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
vector<int> v1(3);
//cout<<v1.size();
for (int i = 0; i < (int)v1.size() ; i++)  // typecasting
{
    cout<<"Enter the element at index "<<i<<endl;
    cin>>element;
    //v1.push_back(element);
    v1[i] = element;
}
display(v1);
return 0;
}