#include <iostream>
using namespace std;
class Base1{
   public:
    void show(void){
        cout<<"From base 1"<<endl;
    }
};
class Base2{
      public:
    void show(void){
        cout<<"From base 2"<<endl;
    }
};

class Derived: public Base1, public Base2 {
    public:
        void display(){}
        void show(){  // Ambiguity resolution in multiple inheritance
            Base1::show();
        }
};
int main() {
    cout << "Multiple Inheritance - Ambiguity resolution" << endl;
    Derived d;
    d.show(); // ambiguity
   
return 0;
}