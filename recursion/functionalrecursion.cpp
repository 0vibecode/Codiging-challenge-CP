#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// finding sum of n natural number using functional recursion
int nsum(int n){
    if (n==0)
    {
        return 0;
    }
    return n+nsum(n-1);
    
}
int main() {
    cout << "Function Recursion" << endl;
    int N;
    cin>>N;
    int res;
    res = nsum(N);
    cout<<res;
    return 0;
}