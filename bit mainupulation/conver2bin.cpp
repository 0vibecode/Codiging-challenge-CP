#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string con2bin(int d){
    string res = "";
    while(d != 1){
        if (d%2 == 1)
        {
            res += "1";
        } else {
            res += "0";
        }
        d = d/2;
    }
    if (d == 1)  // needed for the last bit
    {
        res += "1";
    }
    
    reverse(res.begin(),res.end());
    return res;
}
int main() {
    cout << "Convert to binary from decimal" << endl;
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    string results = con2bin(n);
    cout<<results;
return 0;
}