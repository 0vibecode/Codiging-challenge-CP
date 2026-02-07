#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void summation(int i,int sum){
    // int count = 1;
    // cout<<" The recursion count is "<<count<<endl;
    if (i<1) // base condition
    {
        
        cout<<"*******FINAL OUTPUT*******"<<endl;
        cout<<"THE SUM IS "<<sum<<endl;
        cout<<"---------------------END----------"<<endl;
        return; // function call close
    }
    // Execution call print
    cout<<"Current value of i is "<<i<<endl;
    cout<<"Current value of n is "<<sum<<endl;
    cout<<"Function called as summation("<<i<<","<<sum<<")"<<endl;
    cout<<"Function gives output as sum "<<i+sum<<endl;
    cout<<"---------------------END of execution----------"<<i<<endl;
    summation(i-1,sum+i); // increment call of i
    //count++;
}
int main() {
cout << "Summation function" << endl;
summation(5,0);  // give me sum of 5 natural number
return 0;
}