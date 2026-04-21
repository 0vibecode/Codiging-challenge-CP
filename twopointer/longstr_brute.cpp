#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "Longest substring using brute force approach" << endl;
    string in_s = "cadbzabcd"; // input string for longest subsequence SIZE not the string
    // Solution
    int maxlen = 0;
    for (int i = 0; i < in_s.size(); i++)
    {
        int hashmap[256] = {0}; // hash array with all zero values
        for (int j = i; j < in_s.size(); j++)
        {
            // If the letter already exists in the hashmap array 
            if (hashmap[in_s[j]] == 1)  // TRICKY part with array indexing
            {
                break;
            }

            int len = j-i+1;
            maxlen = max(len,maxlen);
            // update the hashmap if the letter is not seen
            hashmap[in_s[j]] = 1;
        }
        
    }
    cout<<maxlen<<endl;
// time complexity is o(N**2)
// sapce complexity is o(256)
return 0;
}