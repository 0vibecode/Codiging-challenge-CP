#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void recur_swap(int l, int r, vector<int> &arr){
    if (l>=r) // base condition
    {
        cout<<"The recursion call end here!!!"<<endl;
        cout<<"CURRENT index before swap "<<l<<" and "<<r<<endl;
        return; 
    }
    cout<<"*****Start*******"<<endl;
    cout<<"index before swap "<<l<<" and "<<r<<endl;
    cout<<"-------END--------"<<endl;
    swap(arr[l],arr[r]);
    // cout<<"*****Start*******"<<endl;
    // cout<<"index AFTER swap "<<l<<"and "<<r<<endl;
    // cout<<"-------END--------"<<endl;

    recur_swap(l+1,r-1,arr);
    
}
void recur_swap_better(int l, vector<int> &arr){
    if (l>=(arr.size()-1)/2) // base condition
    {
        cout<<"The recursion call end here!!!"<<endl;
        cout<<"CURRENT index before swap "<<l<<" and "<<arr.size()-l-1<<endl;
        return; 
    }
    cout<<"*****Start*******"<<endl;
    cout<<"index before swap "<<l<<" and "<<arr.size()-l-1<<endl;
    cout<<"-------END--------"<<endl;
    swap(arr[l],arr[arr.size()-l-1]);
    // cout<<"*****Start*******"<<endl;
    // cout<<"index AFTER swap "<<l<<"and "<<r<<endl;
    // cout<<"-------END--------"<<endl;

    recur_swap_better(l+1,arr);
    
}
int main() {
cout << "Swapping using Recursion" << endl;
    vector<int> a = {1,2,3,4,5};
    //recur_swap(0,a.size()-1,a);
    recur_swap_better(0,a);
    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
return 0;
}