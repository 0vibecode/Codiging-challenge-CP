#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "Precompute hashing array" << endl;
    // inputs by user
    //vector<int> vec1 = {1,2,3,2,3,2,4}; // vector length is 6
    string ss = "aabcd";
    int len = ss.size() + 1; // length for precompute vector  of length is 7
    cout<<len<<endl;
    vector<int> precompute(27,0); // vector of length 7 with all 0 as initial value
    // precompute filling
    for (auto iter:ss)  // hash function successfully filling
    {
        //cout<<iter<<endl;
        //cout<<iter - 'a'<<endl; // Typecasting to int
        precompute[iter - 'a'] = precompute[iter - 'a'] + 1;
    }
    

    // Display function for vector
    for (auto it:precompute)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    // user input to search in precompute array
    //hard coded input
    char in = 'a';
        
    // Display the output
    cout<<"The result for the number of "<<in<<" is "<<precompute[in - 'a']<<endl;
return 0;
}