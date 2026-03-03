#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void gcd_num(int n1, int n2){
    int gcd = 1;
    for (int i = 1; i <= min(n1,n2); i++)
    {
        if (n1%i == 0 && n2%i == 0)
        {
            gcd = i;
        }
        
    }
    cout<<"GCD of  "<<n1 << " and "<< n2 << " is "<<gcd;
}
int main() {
cout << "Get the GCD" << endl;
    int n1,n2;
    cout<<"Enter the number1 "<<endl;
    cin>>n1;
    cout<<"Enter the number2 "<<endl;
    cin>>n2;
    gcd_num(n1,n2);
return 0;
}