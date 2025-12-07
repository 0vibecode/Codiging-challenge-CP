#include <iostream>
using namespace std;
class Base{
    private:
    int a,b;
    public:
    int c;
    void setData(int a1,int b1); // declaration
    void getData(){
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
        cout<<"Value of c is "<<c<<endl;
    }
};
void Base ::setData(int a1,int b1){
    a = a1;
    b = b1;
}
int main() {
cout << "Basics of Classes" << endl;
Base b1;
b1.setData(3,4);
b1.c = 10;
b1.getData();
return 0;
}