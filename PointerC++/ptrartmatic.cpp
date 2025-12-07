#include <iostream>
using namespace std;
int main() {
cout << "Pointer athematic and arrays" << endl;
int tab[] = {2,5,7,9};  // array declaration 
int *ptrarr = tab; // is same as *ptrarr = tab[0] DO NOT use *ptrarr = &tab
cout<<"Size of int array in C++ is  "<<sizeof(tab)<<endl;
cout<<"Size of int in C++ is  "<<sizeof(tab[0])<<endl;
cout << "Value of array tab using pointer *ptrarr is "<< *ptrarr <<endl;
cout << "Address of array tab using pointer *ptrarr is "<< ptrarr <<endl;
cout << "Value of array tab using pointer *(ptrarr+1) is "<< *(ptrarr+1) <<endl;
cout << "Address of array tab using pointer *(ptrarr+1) is "<< (ptrarr+1) <<endl;
cout << "Value of array tab using pointer *(ptrarr+2) is "<< *(ptrarr+2) <<endl;
cout << "Address of array tab using pointer *(ptrarr+2) is "<< (ptrarr+2) <<endl;
cout << "Value of array tab using pointer *(ptrarr+3) is "<< *(ptrarr+3) <<endl;
return 0;
}