#include <iostream>
#include <utility>
using namespace std;
int main() {
    cout << "Pairs in c++" << endl;
    pair<string,int> p1 = {"key",1};
    p1.first = "abc";
    p1.second = 12;
    cout<<"first element is "<<p1.first<<" second element is "<<p1.second;
return 0;
}