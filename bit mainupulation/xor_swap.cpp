#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void xor_swap(int a, int b){
    cout<<"Value of a is "<<a<<" and value of b is "<<b<<endl;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"AFTER SWAP Value of a is "<<a<<" and value of b is "<<b<<endl;
}
int main() {
    cout << "Swap using XOR operator" << endl;
    int a,b;
    cout<<"Enter the first number "<<endl;
    cin>>a;
    cout<<"Enter the second number "<<endl;
    cin>>b;
    xor_swap(a,b);
return 0;
}