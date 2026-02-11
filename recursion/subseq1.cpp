#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void subseq1(int ind,vector<int> &ds, int arr[],int n){
    if (ind == n)  // base condition
    {
        for (auto it:ds)
        {
            cout<<it<<" ";
        }
        if (ds.size()==0)
        {
            cout<<"{empty}";
        }
        cout<<endl;
        
        return;
    }
    ds.push_back(arr[ind]);
    subseq1(ind+1,ds,arr,n);
    ds.pop_back();
    subseq1(ind+1,ds,arr,n);

    
}
int main() {
    cout << "Subsequence Detection" << endl;
    int arr[] = {3,1,2};
    int n=3;
    vector<int> ds;
    subseq1(0,ds,arr,n);

return 0;
}