#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//TODO:Not working for 4 digit number
void digit_extraction(int N){
    int original = N;
    int lastdigit;
    //int revNum = 0;
    int sum = 0;
    while (N>0)
    {
        lastdigit = N%10;
        //cout<<lastdigit<<endl;
        //revNum = (revNum*10)+lastdigit;
        sum = sum + (lastdigit*lastdigit*lastdigit);
        N = N/10;
    }
    //cout<<"The reverse number is "<<revNum<<endl;
    if (sum == original)
    {
        cout<<"YES its Amstrong number "<<endl;
    } else {
        cout<<"Not a Amstrong number"<<endl;
    }
    
}
int main() {
cout << "Digit extraction" << endl;
    int n;
    cout<<"Enter the digit "<<endl;
    cin>>n;
    digit_extraction(n);
return 0;
}