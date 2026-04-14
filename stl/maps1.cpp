#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "Maps in C++" << endl;
    map<string,int> m1 = {  // unordered_map require to have unique key, key collision is not allowed
        {"abc",1},
        {"xyz",3},
        {"cde",2}, // this will not store as key is collide, key already exists, no error is thrown
    };
    //m1.insert({1,"abc"});
    //m1.insert({2,"cde"});
    //m1.insert({3,"xyz"});
    for (auto pt:m1)
    {
        cout<<pt.first<<"-"<<pt.second<<endl;
        
    }
    m1["xyz"] = 33;  // update the value in map using key
    m1.erase(3);  // Erase using key
    cout<<"After erase"<<endl;
    for (auto pt:m1)
    {
        cout<<pt.first<<"-"<<pt.second<<endl;
        
    }
    cout<<"Searching from key"<<endl;
    cout<<"xyz as key, the value is = "<<m1["xyz"]<<endl;
    cout<<"xyz as key, the value is = "<<m1.at("xyz")<<endl;
    
return 0;
}