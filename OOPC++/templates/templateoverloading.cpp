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
void display(int a){
    cout<<"This is just display with value of a is "<<a<<endl;
}
template <class T> // templatized function
void display(T a){
    cout<<"This is TEMPLATE display with value of a is "<<a<<endl;
}
int main() {
cout << "Template function overloading in C++" << endl;
// Complex <int> c1(3,4);
// c1.display();
/*Always the function call the untemplated version first*/
int x1 = 10;
display(x1);
float x2 = 3.4;
display(x2);
return 0;
}