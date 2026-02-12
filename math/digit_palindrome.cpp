#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void digit_extraction(int N){
    int original = N;
    int lastdigit;
    int revNum = 0;
    while (N>0)
    {
        lastdigit = N%10;
        //cout<<lastdigit<<endl;
        revNum = (revNum*10)+lastdigit;
        N = N/10;
    }
    //cout<<"The reverse number is "<<revNum<<endl;
    if (revNum == original)
    {
        cout<<"YES its palindrome"<<endl;
    } else {
        cout<<" Not a Palindrome"<<endl;
    }
    
}
int main() {
cout << "Digit extraction" << endl;
    int n;
    cout<<"Enter the digit to be extracted "<<endl;
    cin>>n;
    digit_extraction(n);
return 0;
}