#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//sum of n natural number using recursion
void nsum(int i,int sum){
    if (i<1)
    {
        cout<<sum;
        return;
    }
    nsum(i-1,sum+i); // passing parameter recursively 
    
} 

int main() {
    cout << "Parameterized recursion" << endl;
    cout<<"Enter the number of sum"<<endl;
    int N;
    cin>>N;
    nsum(N,0);
    //cout<<"Result of sum of "<<N<<" natural number is "<< nsum(N,0) <<endl;
    return 0;
}