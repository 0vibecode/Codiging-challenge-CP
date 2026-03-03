#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Prime_num(int N){
    int cnt=0;
    for (int i = 1; i*i <= N; i++)
    {
        if (N%i == 0)
        {
            cnt++;
            if ((N/i != i))
            {
                cnt++;
            }
            
        }
        
    }
    if (cnt == 2)
    {
        cout<<"Prime";
    } else {
        cout<<"Not prime";
    }   
}
int main() {
    cout << "Prime number" << endl;
     int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    Prime_num(n);
return 0;
}