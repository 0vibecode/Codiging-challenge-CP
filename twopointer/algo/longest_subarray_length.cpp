#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void vec1d_display(vector<int> v1){
    for (auto it:v1)
    {
        cout<<it<<" ";
    }
    
}
void vec2d_display(vector<vector<int>> vv1){
    for (auto it1:vv1)
    {
        for (auto it2:it1)
        {
            cout<<it2<<" ";
        }
        cout<<endl;
    }
}

int check_condition(vector<vector<int>> vv2, int k){
    int res = 0;
    int sum = 0;
    for (auto it1:vv2)
    {
        for (auto it2:it1)
        {
            sum = sum + it2;
            cout<<sum<<" "<<endl;
        }
        if (sum == k)
        {
            cout<<" Matched "<<k<<" with "<<sum<<endl;
            res = 1;
            return res;
            
        } 
        
    }
    return res;
}

// simple print function for subarray
void long_subarr(vector<int> arr,int vec_condition){
    int vec_size = arr.size();
    vector<vector<int>> stor;
    //int left =0;  // Global declaration should be avoided
    //int right =0; // Global declaration should be avoided
    for (int left = 0; left <= vec_size - 1 ; left++)  // use local declaration of left and right
    {
        //vector<int> temp;
        for (int right = 0; right<vec_size; right++)
        {
            // print loop, we can use condition loop here as well
             vector<int> temp;
            for (int i = left; i <= right; i++)
            {
                //cout<<arr[i]<<" ";
                
                temp.push_back(arr[i]);
            }
             stor.push_back(temp);
            //cout<<endl;
            //right = right+1;
        }
        //stor.push_back(temp);
        //left = left+1;
        //cout<<endl;
    }
    // Display of vector of vector
    //vec2d_display(stor);
    int r = check_condition(stor,7);
    cout<<r<<endl;
    
}

int main() {
    cout << "Longest subarray " << endl;
    vector<int> vec = {2,3,-5,6,7};
    int vec_condition = 11;
    long_subarr(vec,vec_condition);

    //int res = long_subarr(vec,vec_condition);
    //cout<<"The result is "<<res<<endl;
return 0;
}