#include <iostream>
using namespace std;
template <class T1, class T2>
void sum(T1 a, T2 b){
    float res = a+b;  // cannot declare sun as variable name, hence res is final answer
    cout<<"The sum is "<<res<<endl;
}
int main() {
cout << "Function template in C++" << endl;
int x = 20;
int y = 30;
sum(x,y);
float x1 = 20.5; // cannot declare x and y again hence x1 and y1
float y1 =30.4;
sum(x1,y1);
return 0;
}