#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int func_summation(int n){
    // int count = 1;
    // cout<<" The recursion count is "<<count<<endl;
    if (n==0) // base condition
    {
        return 0; // function call close
    }
    // Execution call print
    //cout<<"Current value of i is "<<i<<endl;
    cout<<"Current value of n is "<<n<<endl;
    cout<<"Function called as summation("<<n<<")"<<endl;
    //cout<<"Function gives output as sum "<<<<endl;
    cout<<"---------------------END of execution----------"<<endl;
    return n + func_summation(n-1); // increment call of i
    //count++;
}
int main() {
cout << "Summation function" << endl;
int temp_sum = func_summation(5);  // give me sum of 5 natural number
cout<<"*******FINAL OUTPUT*******"<<endl;
cout<<"THE SUM IS "<<temp_sum<<endl;
cout<<"---------------------END----------"<<endl;
return 0;
}