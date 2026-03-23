#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void brute_subarr(vector<int> v){
    int left = 0;
    int right = 0;
    int len = v.size();
    vector<vector<int>> sub_vec;
    for (int  left = 0; left <= len-1; left++)
    {
        vector<int> temp;
        for (int right = left; right < len; right++)
        {
            temp.push_back(v[right]);
        }
        sub_vec.push_back(temp);
    }
    // Display loop
    for (auto it:sub_vec)
    {
        for (auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    
}
int main() {
    cout << "Brute force subarray" << endl;
    vector<int> vec = {2,3,4,5,6,7,8,9};
    int vec_condition = 11;
    brute_subarr(vec);

return 0;
}