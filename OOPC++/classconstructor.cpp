#include <iostream>
using namespace std;
class base{
    private:
        int i;
    public:
        base(int data){   // constructor does not have a return type
            i= data;
        }
        void getter(void){
            cout<<"The value of i is "<<i<<endl;
        }

};
int main() {
    cout << "Class constructor in C++ " << endl;
    base b1(5); // instance of the class base with data for constructor
    b1.getter();
return 0;
}