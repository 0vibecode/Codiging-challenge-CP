#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Question is find the max sum of window size 4 in the given array.  
*/
int max_sum_arr(vector<int> arr,int window){
    int arr_length  = arr.size();
    // cout<<arr_length<<endl;
    int left = 0;
    int right = window-1; // in this case its 3 as window = 4
    //cout<<right<<endl;
    int max_sum = 0;
    // get the max sum for the first 4 element
    for (int i = 0; i <= right; i++)
    {
        max_sum = max_sum + arr[i];
    }
    //cout<<max_sum<<endl;
    // sliding window with constant window size
    while (right < arr_length-1)  // make sure your sliding window end properly
    {
        int mysum = max_sum - arr[left];
        left = left +1;
        right = right +1;
        mysum = mysum + arr[right];
        max_sum = max(max_sum,mysum);
        cout<<max_sum<<endl;
    } 
    return max_sum;
}
int main() {
    cout << "Constant sliding window" << endl;
    vector<int> vec = {2,3,-5,6,7,11,9,5};
    int vec_window = 4;
    int res = max_sum_arr(vec,vec_window);
    cout<<"The result is "<<res<<endl;
return 0;
}