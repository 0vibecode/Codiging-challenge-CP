#include <iostream>
using namespace std;
class complex{
    int a,b;
    friend complex complexadd(complex o1,complex o2); // friend function can be public or private
    public:
    //friend complex complexadd(complex o1,complex o2); //friend function can access private members
    void setd(int x,int y){
        a= x;
        b=y;
    }
    void getd(){
        cout<<"The compex number is "<<a<<"+"<<b<<"i"<<endl;
    }
   
};
 complex complexadd(complex o1,complex o2){  // friend function can access private variable of class
        complex o3;
        o3.setd( (o1.a+o2.a),  (o1.b+o2.b) );
        return o3;
    }
int main() {
cout << "Class as an argument" << endl;
complex c1,c2,c3;
c1.setd(3,4);
c1.getd();
c2.setd(5,5);
c2.getd();
c3 = complexadd(c1,c2);  // because its a friend function you cannot call on object
c3.getd();
return 0;
}