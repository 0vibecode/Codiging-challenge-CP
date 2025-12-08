#include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
        Complex(void); // default constructor
        Complex(int x,int y); //parametrized constructor
        Complex(int x); //constructor overloading
        void display(void);
};
Complex::Complex(void){
    a=0;
    b=0;
}
Complex::Complex(int x,int y){
    a=x;
    b=y;
}
Complex::Complex(int x){
    a=x;
    b=0;
}
void Complex::display(){
    cout<<"complex number is "<<a<<"+"<<b<<"i"<<endl;
}
int main() {
cout << "Constructors in C++" << endl;
Complex c1;
c1.display();
Complex c2(2,3);
c2.display();
Complex c3(5);
c3.display();
return 0;
}