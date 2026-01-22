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
void patter5(int n){
    //VIMP:make a small example use case to simulate the logic on paper
    for (int row = 0; row <n  ; row++)
        {
            //space
            for (int col = 0; col < n-row-1; col++)
            {
                cout<<" ";
            }
            
            //star
            for (int col = 0; col < 2*row+1; col++)
            {
                cout<<"*";
            }
            //space            
            for (int col = 0; col < n-row-1; col++)
            {
                cout<<" ";
            }
            cout<<endl;
        }
}
void patter6(int n){
    //VIMP:make a small example use case to simulate the logic on paper
    for (int row = 0; row<n  ; row++)
        {
            //space
            for (int col = 0; col < row; col++)
            {
                cout<<" ";
            }
            
            //star
            for (int col = 0; col < 2*n-(2*row+1); col++)
            {
                cout<<"*";
            }
            //space            
            for (int col = 0; col < row; col++)
            {
                cout<<" ";
            }
            cout<<endl;
        }
}
int main() {
    cout << "Loops and pattern basics" << endl;
    patter6(4);
    
return 0;
}