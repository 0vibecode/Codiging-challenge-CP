#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> powerset(vector<int> d){
    vector<vector<int>> ans;
    int bitone = 1;
    int s = d.size();
    //cout<<s<<endl;
    int subset = bitone<<s;   // if size is 3 then subset is 8
    //cout<<subset<<endl;
    for (int num = 0; num < subset; num++)
    {
        vector<int> l1;
        for (int i = 0; i < s ; i++)
        {
            if (num & (bitone<<i))  // do not use && use & as its bitwise operation not the AND operation
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