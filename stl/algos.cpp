//#include <bits/c++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cout << "All the basic algorithms" << endl;
    int a[]= {2,6,3,1,8};
    sort(a,a+5);
    for (int i = 0; i < 5; i++)
    {
        cout<<" "<<a[i]<< " ";
    }
    
return 0;
}