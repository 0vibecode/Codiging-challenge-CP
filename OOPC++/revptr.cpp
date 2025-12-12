#include <iostream>
using namespace std;
int main() {
    cout << "Pointer in C++ - new and delete" << endl;
    int a= 10;
    int *ptr = &a;
    cout<<"The value of a is using pointer "<<*ptr<<endl; 
    cout<<"The value of address of a is using pointer "<<ptr<<endl; 
    return 0;
}