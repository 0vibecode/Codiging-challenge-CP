#include <iostream>
using namespace std;
template<class T>
class Complex{
    public:
        T real;
        T complex;
        Complex(){}
        Complex(T r,T c){
            real = r;
            complex = c;
        }
        void display();
};
template <class T>
void Complex<T>::display(){
    cout<<"The template of real part is "<<real<<" and imaginary part is "<<complex<<endl;
            cout<<real<<" + "<<complex<<"i "<<endl;
}
int main() {
cout << "Template overloading in C++" << endl;
Complex <int> c1(3,4);
c1.display();

return 0;
}