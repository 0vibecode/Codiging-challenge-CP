#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void digit_extraction(int N){
    int count = (int)(log10(N)+1);
    cout<<"The count is "<<count<<endl;
}
int main() {
cout << "Digit extraction" << endl;
    int n;
    cout<<"Enter the digit to be extracted "<<endl;
    cin>>n;
    digit_extraction(n);
return 0;
}