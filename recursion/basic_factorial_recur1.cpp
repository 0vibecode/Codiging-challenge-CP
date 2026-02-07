#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int func_factorial(int n){
    // int count = 1;
    int temp;
    // cout<<" The recursion count is "<<count<<endl;
    if (n==1) // base condition
    {
        return 1; // function call close
    }
    temp  = n * func_factorial(n-1);
    // Execution call print
    //cout<<"Current value of i is "<<i<<endl;
    cout<<"Current value of n is "<<n<<endl;
    cout<<"Function called as func_factorial("<<n<<")"<<endl;
    cout<<"Function gives output as factorial "<<temp<<endl;
    cout<<"---------------------END of execution----------"<<endl;
    return temp; // increment call of i
    //count++;
}
int main() {
cout << "Summation function" << endl;
int temp_sum = func_factorial(5);  // give me sum of 5 natural number
cout<<"*******FINAL OUTPUT*******"<<endl;
cout<<"THE SUM IS "<<temp_sum<<endl;
cout<<"---------------------END----------"<<endl;
return 0;
}