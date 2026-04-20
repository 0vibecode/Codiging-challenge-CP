#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "Longest substring" << endl;
    string str = "abcdef";
    cout<<str.size()<<endl;
    vector<string> sv;
    for (int  left = 0; left <= str.size()-1; left++)
    {
        for (int right = 0; right < str.size(); right++)
        {
            string temp = "";
            for (int i = left; i <=right; i++)
            {
                /* code */
                temp = temp + str[i];
            }
            
            sv.push_back(temp);
        }
    }
    //display
    for (auto it:sv)
    {
        cout<<it<<endl;
    }
    
    //     vector<string> substrings;
    //   for (auto start = str.begin(); start != str.end(); ++start) {
    //     for (auto end = start + 1; end <= str.end(); ++end) {
    //         substrings.emplace_back(start, end);
    //     }
    // }

    // // Print substrings
    // for (const auto& s : substrings) {
    //     std::cout << s << std::endl;
    // }
return 0;
}