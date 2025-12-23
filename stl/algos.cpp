//#include <bits/c++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    cout << "All the basic algorithms" << endl;
    vector<int> a= {2,6,3,1,8};
    sort(a.begin(),a.end());
    for (int i = 0; i < a.size(); i++)
    {
        cout<<" "<<a[i]<< " ";
    }
    
return 0;
}