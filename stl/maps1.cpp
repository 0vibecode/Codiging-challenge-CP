#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "Maps in C++" << endl;
    unordered_map<string,int> m1 = {
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
    
return 0;
}