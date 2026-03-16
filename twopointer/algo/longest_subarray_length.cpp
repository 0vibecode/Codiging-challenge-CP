#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// simple print function for subarray
void long_subarr(vector<int> arr,int vec_condition){
    int vec_size = arr.size();
    //int left =0;  // Global declaration should be avoided
    //int right =0; // Global declaration should be avoided
    for (int left = 0; left <= vec_size - 1 ; left++)  // use local declaration of left and right
    {
        for (int right = 0; right<vec_size; right++)
        {
            // print loop, we can use condition loop here as well
            for (int i = left; i <= right; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            //right = right+1;
        }
        //left = left+1;
        cout<<endl;
    }
    
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