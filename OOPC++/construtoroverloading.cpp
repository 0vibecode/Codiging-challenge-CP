#include <iostream>
using namespace std;
class base{    
    public:
        int key;
        int value;    
        base(void){   // constructor does not have a return type
            this ->key = 10;  // this is a self referencing pointer
            this ->value = 10;
        }
        // constructor overloading not working
        base(int key, int value){
            this->key = key;
            this->value = value; // use the this keyword
        }
       
        void getterkey(){
            cout<<"The value of key is "<< key<<" value is "<< value <<endl;
        }

};
int main() {
    cout << "Class constructor in C++ " << endl;
    base b2;
    base b1(5,10); // instance of the class base with data for constructor
    b1.getterkey();
    b2.getterkey();
return 0;
}