#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "Longest substring" << endl;
    string str = "abcdef";
    // for (auto it:s)
    // {
    //     string sub = "";
    //     //cout<<it<<endl;
    //     for (auto itin:it)
    //     {
    //         cout<<itin<<endl;
    //     }
        
    // }
        vector<string> substrings;
      for (auto start = str.begin(); start != str.end(); ++start) {
        for (auto end = start + 1; end <= str.end(); ++end) {
            substrings.emplace_back(start, end);
        }
    }

    // Print substrings
    for (const auto& s : substrings) {
        std::cout << s << std::endl;
    }
return 0;
}