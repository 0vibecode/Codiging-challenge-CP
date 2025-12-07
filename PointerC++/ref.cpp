#include <iostream>
using namespace std;
// void swap(int x,int y){
//     int temp = x;
//     x=y;
//     y = temp;
    
// }
inline void swap(int x,int y){  // using inline function 
    int temp = x;
    x=y;
    y = temp;
    
}
void swapptr( int *x,int *y){
//void swapptr(const int *x,const int *y){ // you cannot have constant argument if you change the value
 int temp = *x;
    *x=*y;
    *y = temp;   
}
void swapref( int &x,int &y){ // using reference variable
     int temp = x;
        x=y;
        y = temp;
}
int main() {
cout << "Call by value and ref" << endl;
int a=5,b=7;
cout<< "Before SWAP Value of a is "<<a<<" value of b is  "<<b<<endl;
swap(a,b);
cout<< "After SWAP Value of a is "<<a<<" value of b is  "<<b<<endl;
cout<< "Before SWAPPTR Value of a is "<<a<<" value of b is  "<<b<<endl;
swapptr(&a,&b);
cout<< "After SWAPPTR Value of a is "<<a<<" value of b is  "<<b<<endl;
cout<< "Before SWAPREF Value of a is "<<a<<" value of b is  "<<b<<endl;
swapref(a,b);
cout<< "After SWAPREF Value of a is "<<a<<" value of b is  "<<b<<endl;
return 0;
}