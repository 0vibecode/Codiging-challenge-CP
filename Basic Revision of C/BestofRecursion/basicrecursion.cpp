#include <iostream>
using namespace std;

void message4(){
    cout<<"hello from message4"<<endl;
}
void message3(){
    cout<<"hello from message3"<<endl;
    message4();
}
void message2(){
    cout<<"hello from message2"<<endl;
    message3();
}
void message1(){
    cout<<"hello from message1"<<endl;
    message2();
}
void message(){
    cout<<"hello from message"<<endl;
    message1();
}
int main() {
    cout << "Basics of recursion" << endl;
    message();
return 0;
}