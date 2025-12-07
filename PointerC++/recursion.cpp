#include <iostream>
using namespace std;
int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n* factorial(n-1);
}
int fabonachi(int n){
    if (n<2){
        return 1;
    }
    //return fabonachi(n-2)+fabonachi(n-1);
    return fabonachi(n-1)+fabonachi(n-2);
}
int main() {
cout << "Recursive factorial function" << endl;
int a;
cout<<"Enter a number "<<endl;
cin>>a;
cout << "Factorial of " << a<< " is "<< factorial(a)<< endl;
cout << "Fabonachi of " << a<< " is "<< fabonachi(a)<< endl;
return 0;
}