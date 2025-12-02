#include <iostream>
using namespace std;
class basic {
    // by default its private
   
        int i;
    public:
        
        void getter(void){ // default its private
            cout<<"The value inside class for i is "<<i<<endl;
        }
        void setter(int data){
            i = data;
            cout<<"Setting the value of i as " <<data<<endl;
        }
};
int main() {
cout << "Classes in C++" << endl;
basic b1;
b1.setter(25);
b1.getter(); // error because its private
return 0;
}