#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void recurReverseLoop(int i,int n){
    // int count = 1;
    // cout<<" The recursion count is "<<count<<endl;
    if (i<1) // base condition
    {
        return; // function call close
    }
    cout<<"Current value of i is "<<i<<endl;
    cout<<"Current value of n is "<<n<<endl;
    cout<<"Function called as recurLoop("<<i<<","<<n<<")"<<endl;
    cout<<"Function gives output as i "<<i<<endl;
    cout<<"---------------------END----------"<<i<<endl;
    //count++;
    recurReverseLoop(i-1,n); // increment call of i
}
int main() {
cout << "Recursion instead of Loops" << endl;
recurReverseLoop(5,5);  // i = 1 and n = 5
return 0;
}