#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "Maps in C++" << endl;
    map<int,int> m1;
    m1.insert({1,21});
    m1.insert({2,22});
    m1.insert({3,23});
    for (auto pt:m1)
    {
        cout<<pt.first<<"-"<<pt.second<<endl;
        
    }
    
return 0;
}