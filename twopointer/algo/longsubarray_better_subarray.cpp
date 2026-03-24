#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void long_max_sub(vector<int> v, int c){
    int left_shrink = 0;
    int right_expand = 0;
    int sum = 0;
    vector<vector<int>> subarr;
    while (right_expand<v.size())
    {
        sum = sum + v[right_expand];
        while (sum>c)  // Time complexity O(2n)
        {
            sum = sum - v[left_shrink];
            left_shrink = left_shrink + 1;

        }
        // instead of max length, lets take all the possible sub array
        // if (sum <= c)
        // {
        //     max_length = max(max_length,right_expand - left_shrink +1);
        // }
        if (sum <= c)
        {
            vector<int> temp;
            for (int i = left_shrink; i <=right_expand; i++)
            {
                /* code */
                temp.push_back(v[i]);
            }
            
            subarr.push_back(temp);

        }
        
        right_expand = right_expand + 1;    
    }
    // cout<<max_length<<" ";
    // displaying all the subarray
    for (auto it:subarr)
    {
        for (auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    

}
int main() {
    cout << "Longest subarray max length" << endl;
    vector<int> vec = {2,5,1,10,10};
    int vec_condition = 14;
    long_max_sub(vec,vec_condition);
return 0;
}