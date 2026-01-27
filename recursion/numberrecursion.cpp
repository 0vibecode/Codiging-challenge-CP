#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printN(int i, int n){
    if (i>n)
    {
        return;
    }
    cout<<"0"<<i<<endl;
    printN(i+1,n);
}
int main() {
    cout << "Named recursion" << endl;
    int n;
    cin>>n;
    printN(1,n);

return 0;
}