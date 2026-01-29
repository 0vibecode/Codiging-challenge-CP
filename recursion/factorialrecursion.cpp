#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Find the factorial of N natural number
int fact(int n){
    if (n==0 || n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main() {
    cout << "Factorial using recursion" << endl;
    int N;
    cin>>N;
    int res;
    res = fact(N);
    cout<<res;
    return 0;
}