#include <iostream>
using namespace std;
template <class T>
class Complex{
    public:
        T real;
        T complex;
        Complex(){}
        Complex(T r,T c){
            real = r;
            complex = c;
        }
        void display(){
            cout<<"The template of real part is "<<real<<" and imaginary part is "<<complex<<endl;
            cout<<real<<" + "<<complex<<"i "<<endl;
        }
};
int main() {
    cout << "Templates in C++" << endl;
    Complex <float> c1(2.3,3.2);
    c1.display();
    Complex <int> c2(5,6);
    c2.display();

    return 0;
}