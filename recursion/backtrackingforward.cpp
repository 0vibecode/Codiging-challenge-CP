#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printN(int i, int n){
    if (i<1)
    {
        return;
    }
    printN(i-1,n);
    cout<<"0"<<i<<endl;
}
int main() {
    cout << "Named recursion" << endl;
    int n;
    cin>>n;
    printN(n,n);

return 0;
}