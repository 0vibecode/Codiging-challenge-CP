#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void rloop(){
    if (ct > 5)
    {
        return;
    }
    cout<<ct<<endl;
    ct++;
    rloop();
}
int main() {
    int ct = 1;
    cout << "Recursion basics" << endl;
    
    rloop();

return 0;
}