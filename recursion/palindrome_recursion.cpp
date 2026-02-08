#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool chk_palindrome(int i, string &s){
    if (i>=s.size()/2) 
    {
        cout<<"Congrats!! Your sting is palindrome"<<endl;
        return true;
    }
    if (s[i] != s[s.size()-i-1])
    {   
        cout<<"String is not palindrome at index "<<i<<" and at "<<s.size()-i-1<<endl;
        return false;
    }
    cout<<"******Start******"<<endl;
    cout<<"Checking at the index "<<i<<endl;
    cout<<"-------------Check complete------------"<<endl;
    return chk_palindrome(i+1,s);
    
}
int main() {
    cout << "Palindrome of string" << endl;
    string strin = "madam";
    string strin1 = "msdam";
    cout<<chk_palindrome(0,strin);
    return 0;
}