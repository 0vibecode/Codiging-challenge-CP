#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void backtrackingReverseLoop(int i,int n){
    // int count = 1;
    // cout<<" The recursion count is "<<count<<endl;
    if (i>n) // base condition
    {
        return; // function call close
    }
    backtrackingReverseLoop(i+1,n); // increment call of i
    cout<<"Current value of i is "<<i<<endl;
    cout<<"Current value of n is "<<n<<endl;
    cout<<"Function called as recurLoop("<<i<<","<<n<<")"<<endl;
    cout<<"Function gives output as i "<<i<<endl;
    cout<<"---------------------END----------"<<i<<endl;
    //count++;
}
int main() {
cout << "Recursion instead of Loops" << endl;
backtrackingReverseLoop(1,5);  // i = 1 and n = 5
return 0;
}