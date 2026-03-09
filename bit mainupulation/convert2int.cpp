#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int con2dec(string b){
    int res = 0;
    int p = 1;
    int len = b.length();
    
    //cout<<"i val "<<i<<endl;
    for (int i  = len-1; i >= 0; --i)
    {
        //cout<<"in loop"<<endl;
        if (b[i] == '1')
        {
            res = res+p;
            //cout<<res<<endl;
        }
        p = p*2;
    }
    
    return res;
}
int main() {
    cout << "Convert to binary from decimal" << endl;
    string n;
    cout<<"Enter the binary "<<endl;
    cin>>n;
    int results = con2dec(n);
    cout<<results;
    /* Error reproduced*/
    //string st = "abc";
    //cout<<st[1];
    // if (st[1]=='b')
    // {
    //     cout<<"yes";
    // } else {
    //     cout<<"no";
    // }
    
return 0;
}
// int main() {
//     string str = "GeeksforGeeks";
    
//     int N = str.length();
//     for (int i = 0; i < N; i++) {
//         cout<< str[i]<< " ";
//     }
// }