#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "Vectors basics" << endl;
    /*
    vv1
    ---at 0 index of vv1 - v1 = {1,2,3}
    ---at 1 index of vv1 - v2 = {4,5,6}
    */
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {4,5,6};
    vector<vector<int>> vv1;
    vv1.push_back(v1);
    vv1.push_back(v2);
    for (auto it1:vv1)
    {
        for (auto it2:it1)
        {
            cout<<it2<<" ";
        }
        cout<<endl;
    }
    
return 0;
}