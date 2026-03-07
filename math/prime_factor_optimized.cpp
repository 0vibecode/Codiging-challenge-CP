#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Prime_factor(int N){
    //int cnt=0;
    vector<int> res;
    for (int i = 2; i <= sqrt(N); i++)
    {
        if (N%i == 0)
        {
            //cnt++;
            res.push_back(i);
            while (N%i == 0)
            {
                N = N/i;
            }
        }
    }
    if (N != 1)
    {
        res.push_back(N);
    }
    
    for (auto it:res)
    {
        cout<<it<<" ";
    }
       
}
int main() {
    cout << "Prime Factor" << endl;
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    Prime_factor(n);
return 0;
}