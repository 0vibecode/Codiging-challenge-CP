#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> powerset(vector<int> d){
    vector<vector<int>> ans;
    int bitone = 1;
    int s = d.size();
    int subset = bitone<<s;
    
    for (int num = 0; num < subset-1; num++)
    {
        vector<int> l1;
        for (int i = 0; i < s ; i++)
        {
            if (num && (bitone<<i))
            {
                l1.push_back(d[i]);
            } 
        }
        ans.push_back(l1);
    }
    
    return ans;
}
int main() {
    cout << "Power set approach" << endl;
    vector<int> data = {2,3,5};
    vector<vector<int>> z = powerset(data);
    for (auto it:z)
    {
        for (auto itin:it)
        {
            cout<<itin<<" ";
        }
        cout<<endl;  
    }
    
return 0;
}