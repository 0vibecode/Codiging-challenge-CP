#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printN(int i, int n){
    if (i>n)
    {
        return;
    }
    printN(i+1,n);
    cout<<"0"<<i<<endl;
}
int main() {
    cout << "Named recursion" << endl;
    int n;
    cin>>n;
    printN(0,n);

return 0;
}