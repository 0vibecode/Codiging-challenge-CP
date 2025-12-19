#include <iostream>
using namespace std;
/*
The Notes for recursive functions
1. Choose your function argument carefully, these argument will be called recursively
2. In the function body, choose the parameter that does not make any serious change in the output. e.g in binary sort
3. Always provide the terminating condition for recursive function call.
4. return statement should be used along with recursive function call. 
5. Make sure the time complexity is not linear, if so use other technique such as DP or iterations
6. Alternative for recursion is iterative approach. 
*/

void message(int i ){
    if (i == 6){  // base condition to break the recursion
        return;
    }
    cout<<"hello from message from "<<i<<" call "<<endl;
    message(i+1); // recursive call
}
int main() {
    cout << "Basics of recursion" << endl;
    message(1);
return 0;
}