#include <iostream>
using namespace std;
class Base{
    protected: // as good as private but derived class can hae access to it. 
        int a;
    private:
        int b;
    public:
        int c;
        Base(){
            a= 15;
            b=20;
            c=30;
        }
};
class Derived:protected Base {
    public:
        void display(){
            cout<<"From derived class "<<endl;
            cout<<"Value of a is  "<<a<<endl;
            //cout<<"b is  "<<b<<endl; // its private
            cout<<"Value of c is  "<<c<<endl;
            
        }
};
int main() {
    cout << "Protected Member" << endl;
    Base b;
    Derived d;
    d.display();
    //cout<<"From base object b"<<b.a<<endl; //  bot possible here its protected and hence can only be accessed from derived class.
    cout<<"From base object b "<<b.c<<endl; // c is public
return 0;
}
/*
//..................Inheritance table........................//
                    Public derivation   private derivation  protected derivation
Private member      Not accessible      Not accessible      Not accessible
Public member       Public              private             protected           
protected member    protected           private             protected
*/