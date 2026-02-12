#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void digit_extraction(int N){
    int lastdigit;
    while (N>0)
    {
        lastdigit = N%10;
        cout<<lastdigit<<endl;
        N = N/10;
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