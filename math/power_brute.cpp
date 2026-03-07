#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Power(int x, int n){
    int ans =1;
    while (n>0)
    {
        // check if n is even
        if (n%2 == 1)
        {
            ans = ans * x;
            n = n-1;
        } else {  // if n is odd
            n = n/2;
            x = x*x;
        }
        
    }
    cout<<ans<<endl;    
    
}
int main() {
    cout << "Power function" << endl;
    int x,n;
    cout<<"Enter the number "<<endl;
    cin>>x;
    cout<<"Enter the power "<<endl;
    cin>>n;
    Power(x,n);
return 0;
}