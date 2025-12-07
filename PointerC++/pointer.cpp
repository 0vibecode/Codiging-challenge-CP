#include <iostream>
using namespace std;
int main() {
cout << "Pointer in CPP" << endl;
int a = 10;
int *ptr = &a; // pointer of a
// & is address of operator
// * is dereferencing operator
// ** is double dereferencing operator (doing dereferencing twice)
int **ptrptr = &ptr;
//int **ptrptr = &ptr;
cout << "Value of a using pointer ptr " << *ptr << endl;
cout << "Address of a using pointer ptr " << ptr << endl;
cout << "Address of a using &a " << &a << endl;
cout << "Address of ptr using &ptr " << &ptr << endl;
cout << "Address of *ptrptr using *ptrptr " << *ptrptr << " It is same as address of a "<< endl;
cout << "Value of ptrptr using **ptrptr " << **ptrptr << " Same as value of a " << endl;
return 0;
}