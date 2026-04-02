#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "String and Hash in C++" << endl;
    // Create a string variable
    //string greeting = "Hello";
    string s1 = "abCde";
    string s2 = "abCde";
    // Print the string
    //cout << greeting[1];
    //cout<<greeting.size();
    // for (int i = 0; i < greeting.size(); i++)
    // {
    //     cout<<greeting[i]<<endl;
    // }
    // reverse(greeting.begin(),greeting.end());
    // cout<<greeting;
    hash<string> h;
    cout<<h(s1)<<endl;  // Hashing the string
    cout<<h(s2)<<endl;  // Hashing the string

return 0;
}