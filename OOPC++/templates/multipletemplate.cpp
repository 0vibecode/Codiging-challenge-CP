#include <iostream>
using namespace std;
template <class T1, class T2>
class Complex{
    public:
        T1 real;
        T2 complex;
        Complex(){}
        Complex(T1 r,T2 c){
            real = r;
            complex = c;
        }
        void display(){
            cout<<"The template of real part is "<<real<<" and imaginary part is "<<complex<<endl;
            cout<<real<<" + "<<complex<<"i "<<endl;
        }
};
int main() {
cout << "Multiple template class" << endl;
Complex <char,int> c1('H',10);
c1.display();

return 0;
}