#include <iostream>
using namespace std;

void message4(int i ){
    cout<<"hello from message4 from "<<i<<" call "<<endl;
}
void message3(int i ){
    cout<<"hello from message3 from "<<i<<" call "<<endl;
    message4(5);
}
void message2(int i ){
    cout<<"hello from message2 from "<<i<<" call "<<endl;
    message3(4);
}
void message1(int i ){
    cout<<"hello from message1 from "<<i<<" call "<<endl;
    message2(3);
}
void message(int i ){
    cout<<"hello from message from "<<i<<" call "<<endl;
    message1(2);
}
int main() {
    cout << "Basics of recursion" << endl;
    message(1);
return 0;
}