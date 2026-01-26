#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int ct = 1;
void rloop(){
    if (ct >= 5)
    {
        return;
    }
    cout<<ct<<endl;
    ct++;
    rloop();
}
int main() {

    cout << "Recursion basics" << endl;
    
    rloop();

return 0;
}