#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void alldivisor(int N){
    for (int i = 1; i <= N; i++)
    {
        if (N%i == 0)
        {
            cout<<i<<" ";
        }
        
    }
    
}
int main() {
    cout << "Print all the divisor" << endl;
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    alldivisor(n);
    return 0;
}