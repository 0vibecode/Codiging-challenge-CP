#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> powerset(vector<int> d){
    vector<vector<int>> ans;
    int bitone = 1;
    int s = d.size();
    int subset = s<<bitone;
    
    for (int num = 0; num < subset-1; num++)
    {
        vector<int> l1;
        for (int i = 0; i < s-1 ; i++)
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
        cout<<endl;;
        for (auto itin:it)
        {
            cout<<itin<<" ";
        }
        
    }
    
return 0;
}