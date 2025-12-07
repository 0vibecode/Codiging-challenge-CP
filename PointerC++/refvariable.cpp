#include <iostream>
using namespace std;
int main() {
cout << "Reference variable in C++" << endl;
int i = 205;
int & iref = i;  // reference variable in C++
cout << "Value of i is "<< i << endl;
cout << "Value of iref REFERRING TO i is "<< iref << endl;
return 0;
}