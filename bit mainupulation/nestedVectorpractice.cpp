#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "Nested vector practice" << endl;
    vector<int> a = {1,2,3};
    vector<int> b = {31,22,13};
    vector<vector<int>> ab;
    ab.push_back(a);
    ab.push_back(b);
    for (auto i:ab)
    {
        for (auto j:i)
        {
            cout<<j<<"  ";
        }
        cout<<endl;
    }
    
return 0;
}