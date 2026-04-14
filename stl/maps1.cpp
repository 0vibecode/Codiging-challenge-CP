#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "Maps in C++" << endl;
    unordered_map<string,int> m1 = {  // unordered_map require to have unique key, key collision is not allowed
        {"abc",1},
        {"xyz",3},
        {"cde",2},
    };
    //m1.insert({1,"abc"});
    //m1.insert({2,"cde"});
    //m1.insert({3,"xyz"});
    for (auto pt:m1)
    {
        cout<<pt.first<<"-"<<pt.second<<endl;
        
    }
    cout<<"Searching from key"<<endl;
    cout<<"abc as key, the value is = "<<m1["abc"]<<endl;
    cout<<"abc as key, the value is = "<<m1.at("abc")<<endl;
    
return 0;
}