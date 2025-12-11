#include <iostream>
using namespace std;
class Base1{
    protected:
        int b1;
    public:
        Base1(){}
        //Base1(int val): b1(val) {}  // Also works
        Base1(int val){

            b1 = val;
        } 
};
class Base2{
    protected:
        int b2;
    public:
        Base2(){}
        Base2(int val) {
            b2=val;
        }
};

class Derived: public Base1, public Base2 {
    public:
        Derived(){}
        Derived(int x, int y) : Base1(x), Base2(y) {}
        void show(void){
            cout<<"vALUE OF BASE1 B1 IS "<< b1<<endl;
            cout<<"vALUE OF BASE2 B2 IS "<< b2<<endl;
            cout<<"SUM  OF BASE1 and  BASE2 IS "<< b1+b2<<endl;
        }
};
int main() {
    cout << "Multiple Inheritance" << endl;
    Derived d(2,3);
    d.show();
return 0;
}