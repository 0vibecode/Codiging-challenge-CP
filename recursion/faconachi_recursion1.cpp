#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fab_recur(int num){ // Details with time complexity
    if (num<=1)
    {
        cout<<"We are at base case with num = "<<num<<endl;
        return num;
    }
    cout<<"**********START LAST************"<<endl;
    cout<<"Value of num before last "<<num<<endl;
    int last = fab_recur(num -1);
    cout<<"Value of num AFTER last "<<num<<endl;
    cout<<"--------END LAST--------"<<endl;
    cout<<"**********START SLAST************"<<endl;
    cout<<"Value of num before Slast "<<num<<endl;
    int slast = fab_recur(num -2);
    cout<<"--------END SLAST--------"<<endl;
    return last+slast;
}
int main() {
    cout << "Fabonachi series using Recursion" << endl;
    int res = fab_recur(6);
    cout<<res<<endl;

    return 0;
}