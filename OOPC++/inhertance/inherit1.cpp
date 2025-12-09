#include <iostream>
using namespace std;
/*
Visiblity mode of base class to derived class
1. By default it s private and all public member of base class becomes private member of derived class. 
2. In public inheritance and all public member of base class becomes public member of derived class.
3. Private member of Base class cannot be inherited. 

*/
class Base{
    int num;
    public:
        //int num;
        Base(int newnum){
            num = newnum;
        }
        Base(){} // default constructor
        void displayBase(void){
            cout<<"--------------Start-----------------"<<endl;
            cout<<"Calling FROM THE BASE CLASS "<<endl;
            cout<<"The value of num is "<<num<<endl;
            cout<<"--------------END-----------------"<<endl;
        }
        void getBase(void){
            cout<<"--------------Start-----------------"<<endl;
            cout<<"Calling FROM THE BASE CLASS USING GETTER "<<endl;
            cout<<"The value of num is "<<num<<endl;
            cout<<"--------------END-----------------"<<endl;
        }
        int getNum(){
            return num;
        }
};
class Derived:private Base {
    public:
        int derived;
        Derived(int setnum) : Base(setnum) {
            //num = setnum; // setting num in base class using derived class constructor
            //Base(setnum); // Not possible 
            derived = 25; // setting derived variable in derived class in constructor
        }
        void displayDerived(void){
            cout<<"The value of derived is "<<derived<<endl;
        }
        void displayBaseDerived(void){
            //cout<<"The value of num from Base class is "<<num<<endl;
            //getBase();
            cout<<"The value of derived is "<<derived<<endl;
        }
        void process(){
            int result;
            result = derived*getNum();
            cout<<"Processed result is "<<result<<endl;
        }
};
int main() {
cout << "Inheritance in C++" << endl;
Derived D(12); // derived class calling constructor of base class
D.displayDerived();
D.displayBaseDerived();
D.process();
//int temp = D.getNum(); // this cannot be working
//cout<<"Value from private "<<temp<<endl;
//D.displayBase(); 
return 0;
}