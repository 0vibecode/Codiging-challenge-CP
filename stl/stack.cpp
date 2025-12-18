#include <iostream>
#include <stack>
using namespace std;
int main() {
cout << "STL Stack implementation" << endl;
stack<int> s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
//stack<int> :: iterator iter;  // not possible in stack
// iter = &s;
// for (iter.begin(); !iter.end(); ++iter)
// {
//     cout<<*iter<<endl;
// }
stack<int> temp(s); // creating a copy of stack s

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

return 0;
}