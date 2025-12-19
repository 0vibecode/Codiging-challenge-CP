#include <iostream>
using namespace std;


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