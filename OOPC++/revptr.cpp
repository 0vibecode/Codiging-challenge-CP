#include <iostream>
using namespace std;
int main() {
    cout << "Pointer in C++ - new and delete" << endl;
    //int a= 10;
    // int *ptr = new int(10);
    // cout<<"The value of a is using pointer "<<*ptr<<endl; 
    // cout<<"The value of address of a is using pointer "<<ptr<<endl; 
    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    delete[] arr;
    cout<<"The value of arr[0] is using pointer "<<arr[0]<<endl; 
    cout<<"The value of address of arr is using pointer "<<(arr)<<endl; 
    cout<<"The value of arr[1] is using pointer "<<*(arr+1)<<endl; 
    cout<<"The value of address of arr+1 is using pointer "<<(arr+1)<<endl; 
    cout<<"The value of arr[2] is using pointer "<<arr[2]<<endl; 
    cout<<"The value of address of arr+1 is using pointer "<<(arr+2)<<endl; 
    return 0;
}