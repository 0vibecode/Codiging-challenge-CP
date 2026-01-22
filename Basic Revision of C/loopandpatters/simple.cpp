#include <iostream>
using namespace std;
void patter1(void){
    int row,col;
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void patter2(void){
    int row,col;
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col <= row; col++) // make sure you put the <= insted of just <
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void patter3(void){
    int row,col;  // printing the row number
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col <= row; col++) // make sure you put the <= insted of just <
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
}
void patter4(int n){
    int row,col;  
    for (int row = n; row >0  ; row--)
    {
        for (int col = 0; col < row ; col++) // make sure you put the <= insted of just <
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main() {
    cout << "Loops and pattern basics" << endl;
    patter4(5);
    
return 0;
}