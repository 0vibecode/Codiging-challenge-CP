//TODO:Expirment the placement of class and its associated member function
#include <iostream>
using namespace std;
class complex; // forward declaration
class calculator{
    public:
    int sumreal(complex,complex);
    int sumcomplex(complex,complex);
};
class complex{
    int a,b;
    //friend complex complexadd(complex o1,complex o2); // friend function can be public or private
    // friend int calculator::sumcomplex(complex,complex);
    // friend int calculator::sumreal(complex,complex);
    friend class calculator;
    public:
    //friend complex complexadd(complex o1,complex o2); //friend function can access private members
    void setd(int x,int y){
        a= x;
        b=y;
    }
    void getd(){
        cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int calculator::sumreal(complex o1,complex o2){
    return (o1.a+o2.a);
}
int calculator::sumcomplex(complex o1,complex o2){
    return (o1.b+o2.b);
}
//  complex complexadd(complex o1,complex o2){  // friend function can access private variable of class
//         complex o3;
//         o3.setd( (o1.a+o2.a),  (o1.b+o2.b) );
//         return o3;
//     }
int main() {
cout << "Class as an argument" << endl;
complex c1,c2,c3;
calculator cal;
c1.setd(3,4);
c1.getd();
c2.setd(5,5);
c2.getd();
c3.setd(cal.sumreal(c1,c2),cal.sumcomplex(c1,c2));  // because its a friend function you cannot call on object
c3.getd();
return 0;
}