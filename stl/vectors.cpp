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
int size,element;
cout<<"Enter the size of Vector "<<endl;
cin>>size;
vector<int> v1;
for (int i = 0; i < size ; i++)
{
    cout<<"Enter the element at index "<<i<<endl;
    cin>>element;
    v1.push_back(element);
}
display(v1);
return 0;
}