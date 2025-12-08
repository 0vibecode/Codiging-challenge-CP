#include <iostream>
using namespace std;
class Node {
    private:
        int id;
        static int count;
    public:
        void set(void){
            cout<<"Enter the id "<<endl;
            cin>>id;
            count++;
        }
        void get(void){
            cout<<" The id is "<< id <<" The count is "<<count <<endl;
        }
        static void countdisplay(void){ // static function only access static variables of class also known as class functions. Does not need object to invoke.
            cout<<"The value of count is right now is  "<<count <<endl;
        }
};
int Node::count=100; // static variable starting with 100
//int Node::count; // static variable with starting 0
int main() {
cout << "Static variable and methods" << endl;
// Node n1,n2;
// n1.set();
// n1.get();
// Node::countdisplay();

// n2.set();
// n2.get();
// Node::countdisplay();
Node arr[3];
for (size_t i = 0; i < 3; i++){
    arr[i].set();
     arr[i].get();
}

return 0;
}