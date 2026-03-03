#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void alldivisor(int N){
    vector<int> ds;
    for (int i = 1; i*i <= N; i++)
    {
        if (N%i == 0)
        {
            ds.push_back(i);
            if((N/i)!= i){
                ds.push_back(N/i);
            }
        }
        
    }
    sort(ds.begin(),ds.end());
    for (auto it:ds)
    {
        cout<<it<<" ";
        
    }
    
}
int main() {
    cout << "Factor Printing better algo" << endl;
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    alldivisor(n);
return 0;
}