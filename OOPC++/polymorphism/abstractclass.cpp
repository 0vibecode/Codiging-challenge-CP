//TODO:Revise as much as possible.
#include <iostream>
using namespace std;
class Base{  // With atleast one pure virtual function this base class become abstract base class
    public:
    int base;
    void setBase(int b){
        base = b;
    }
    virtual void serDerived(int a, int b){}
    virtual void display()=0; // creating pure virtual function
};
class Derived1:public Base{
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
        cout<<"****FROM Derived I CLASS**** "<<endl;
        cout<<"I. The derived value is "<<derived<<endl;
        cout<<"I. The Base value from base class is "<<base<<endl;
    }
};
class Derived2:public Base{
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
        cout<<"****FROM Derived II CLASS**** "<<endl;
        cout<<"II. The derived value is "<<derived<<endl;
        cout<<"II. The Base value from base class is "<<base<<endl;
    }
};
int main() {
cout << "Virtual functions in C++" << endl;
Base *b1 = new Derived1();
Base *b2 = new Derived2();
//Derived1 *d1 = new Derived1();
//Derived2 *d2 = new Derived2();
b1->serDerived(3,4);
b2->serDerived(300,400);
b1->display();
b2->display();

return 0;
}