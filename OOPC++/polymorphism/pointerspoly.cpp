#include <iostream>
using namespace std;
class Base{
    public:
    int base;
    void setBase(int b){
        base = b;
    }
    void display(){
        cout<<"****FROM BASE CLASS**** "<<endl;
        cout<<"The base value is "<<base<<endl;
    }
};
class Derived:public Base{
    public:
    int derived;
    void serDerived(int d){
        derived = d;
    }
    void serDerived(int d,int b){  // compile time polymorphism
        derived = d;
        base = b;
    }
    void display(){
        cout<<"****FROM Derived CLASS**** "<<endl;
        cout<<"The derived value is "<<derived<<endl;
        cout<<"The Base value from base class is "<<base<<endl;
    }
};
int main() {
    cout << "Class Pointers and polymorphism" << endl;
    Base *base_pointer;
    base_pointer = new Derived(); // due to memory size of class pointer in C++ we can have derived object in base class pointer
    cout<<"Class pointer size for base "<<sizeof(base_pointer)<<endl;
    //base_pointer = new Base();
    base_pointer->setBase(55);
    base_pointer->display(); // calling the display function in base class using run-time polymorphism or late binding
    Derived *derived_pointer;
    derived_pointer = new Derived();
    cout<<"Class pointer size for Derived "<<sizeof(derived_pointer)<<endl;
    derived_pointer->serDerived(250);
    derived_pointer->display(); // calling the derived class display method here.
    derived_pointer->serDerived(1250,300);
    derived_pointer->display(); // calling the derived class display method here.


return 0;
}