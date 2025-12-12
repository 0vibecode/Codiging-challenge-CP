#include <iostream>
using namespace std;
class A{
    int a;
    public:
        A& setVal(int a){
            this->a = a; // this is an important keyword for self ref pointer to class object 
            return *this; // returning the object instance through this pointer*****
        }
        void getVal(){
            cout<<"The value of a is "<< this->a<<endl;
        }
};
int main() {
cout << "This pointer in C++" << endl;
A i;
i.setVal(5).getVal();  // due to this pointer we can chain the function call
return 0;
}