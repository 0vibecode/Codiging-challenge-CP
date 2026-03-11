#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void left_set(int num, int bitcheck){
    cout<<"LEFT SHIFT OPERATOR, The Number is "<<num<<" and bit check is "<<bitcheck<<endl;
    //int temp = num;
    int bitone = 1;
    int leftshift = bitone<<bitcheck;
    if (num && leftshift)
    {
        cout<<"True"<<endl;
    } else {
        cout<<"false"<<endl;
    }
}
void right_set(int num, int bitcheck){
        cout<<"Right SHIFT OPERATOR, The Number is "<<num<<" and bit check is "<<bitcheck<<endl;
    //int temp = num;
    int bitone = 1;
    int rightshift = num>>bitcheck;
    if (num && rightshift)
    {
        cout<<"True"<<endl;
    } else {
        cout<<"false"<<endl;
    }
}
int main() {
    cout << "Swap using XOR operator" << endl;
    int a,b;
    cout<<"Enter the number "<<endl;
    cin>>a;
    cout<<"Enter the bit number "<<endl;
    cin>>b;
    right_set(a,b);
    left_set(a,b);
return 0;
}