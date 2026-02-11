#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void subseq1(int ind,vector<int> &ds, int arr[],int n){
    if (ind == n)  // base condition
    {
        for (auto it:ds)
        {
            cout<<"Output: ";
            cout<<it<<" ";
        }
        if (ds.size()==0)
        {
            cout<<"{empty}";
        }
        cout<<endl;
        
        return;
    }
    cout<<"*****START*****"<<endl;
    cout<<"Adding value to the vector at index of "<<ind<<endl;
    ds.push_back(arr[ind]);
    cout<<"Current value of DS is below at index "<<ind<<"  ";
    for (auto it:ds)
    {
        cout<<it<<" ";
    }
    // cout<<"After value to the vector at index of "<<ind<<endl;
    subseq1(ind+1,ds,arr,n);
    cout<<"Poping value to the vector at index of "<<ind<<endl;
    ds.pop_back();
    cout<<"Current value of DS is below at index "<<ind<<"  ";
    for (auto it:ds)
        {
            cout<<it<<" ";
        }
    cout<<"Second recursion call at "<<ind<<endl;
    subseq1(ind+1,ds,arr,n);
    cout<<"-----------------Recursion completed without base condition------------ "<<ind<<endl;

    
}
int main() {
    cout << "Subsequence Detection" << endl;
    int arr[] = {3,1,2};
    int n=3;
    vector<int> ds;
    subseq1(0,ds,arr,n);

return 0;
}