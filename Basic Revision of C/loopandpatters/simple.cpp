#include <iostream>
using namespace std;
int main() {
    cout << "Loops and pattern basics" << endl;
    int row,col;
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
return 0;
}