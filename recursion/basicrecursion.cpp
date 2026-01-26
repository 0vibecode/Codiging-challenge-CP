#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rloop(void){
    if (count == 5)
    {
        return
    }
    cout<<count<<endl;
    count++;
    rloop();
}
int main() {

    cout << "Recursion basics" << endl;
    int count = 0;
    rloop();

return 0;
}