#include <iostream>
using namespace std;
class A{
    int a;
    public:
        void setVal(int a){
            this->a = a; // this is an important keyword for self ref pointer to class object 
        }
        void getVal(){
            cout<<"The value of a is "<< this->a<<endl;
        }
};
int main() {
cout << "This pointer in C++" << endl;
A i;
i.setVal(5);
i.getVal();
return 0;
}