#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void funRecur(int baseCondition){
    //int baseCondition = 0; // Create infinite loop if declared here.
    if (baseCondition == 5)
    {
        return;
    }
    cout<<baseCondition<<endl;
    baseCondition++;
    funRecur(baseCondition);
}
int main() {
cout << "Recursion Basics" << endl;
int baseCondition = 0;
funRecur(baseCondition);
return 0;
}