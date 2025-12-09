#include <iostream>
using namespace std;
/*
Visiblity mode of base class to derived class
1. By default it s private and all public member of base class becomes private member of derived class. 
2. In public inheritance and all public member of base class becomes public member of derived class.
3. Private member of Base class cannot be inherited. 

*/
class Base{
    public:
        int num;
        Base(int newnum){
            num = newnum;
        }
        Base(){} // default constructor
        void displayBase(void){
            cout<<"The value of num is "<<num<<endl;
        }
};
class Derived:Base {
    public:
        int derived;
        Derived(int setnum){
            num = setnum; // setting num in base class using derived class constructor
            derived = 25; // setting derived variable in derived class in constructor
        }
        void displayDerived(void){
            cout<<"The value of derived is "<<derived<<endl;
        }
        void displayBaseDerived(void){
            cout<<"The value of num from Base class is "<<num<<endl;
            cout<<"The value of derived is "<<derived<<endl;
        }
};
int main() {
cout << "Inheritance in C++" << endl;
Derived D(12); // derived class calling constructor of base class
D.displayDerived();
D.displayBaseDerived();
//D.displayBase(); // cannot be called in private inheritance
return 0;
}