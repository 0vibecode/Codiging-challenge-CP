#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setd(int x,int y){
        a= x;
        b=y;
    }
    void getd(){
        cout<<"The compex number is "<<a<<"+"<<b<<"i"<<endl;
    }
    void complexadd(complex o1,complex o2){
        a = o1.a+o2.a;
        b = o1.b+o2.b;
    }
};
int main() {
cout << "Class as an argument" << endl;
complex c1,c2,c3;
c1.setd(3,4);
c1.getd();
c2.setd(5,5);
c2.getd();
c3.complexadd(c1,c2);
c3.getd();
return 0;
}