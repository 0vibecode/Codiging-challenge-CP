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
            for (int col = 0; col < 2*n-(2*row+1); col++) // Everything is about this formula and brackets
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
void patter7(int n){
    
    for (int row = 0; row <= 2*n-1; row++)  
    {
        int star = row;
        if (row>n)
        {
            star=2*n-row;   
        }
        
        for (int col = 0; col < star; col++) // start with 1 if <= is used else use only <
        {
           cout<<"*";
        }
        cout<<endl;
    }
    
}
void pattern8(int n){
    int start = 1;
    for (int row = 0; row < n; row++)
    {
        if (row%2 == 0)
        {
            start = 1;
        } else {
            start=0;
        }
        for (int col = 0; col <= row; col++)
        {
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
    
}

void pattern9(int n){
    int space = 2*(n-1);
    for (int row = 1; row < n; row++)
    {
        //number
        for (int col = 1; col <= row; col++)
        {
            cout<<col;
        }
        
        // space
        for (int col = 1; col < space; col++)
        {
            cout<<" ";
        }
        

        // number reverse
        for (int col = row ; col >= 1; col--)
        {
            cout<<col;
        }
        cout<<endl;
        space -=2;
    }
    
}
void pattern10(int n){
    int num=1;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout<<num;
            num += 1;
        }
        cout<<endl;
    }
    
}

void pattern11(int n){
    for (int row = 0; row <= n; row++)
    {
        for (char colch = 'A'; colch < 'A'+row; colch++)
        {
            cout<<colch<<" ";
            //cout<<int(colch); //ASCII value for A=65 

        }
        cout<<endl;
    }
    
}
void pattern12(int n){
    for (int row = 0; row <= n; row++)
    {
        for (char ch = 'A'; ch <= 'A'+(n-row-1); ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
}
void pattern13(int n){
    for (int row = 0; row <= n; row++)
    {
        char ch = 'A'+row;
        for (int  col = 0; col <= row; col++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
}
void pattern14(int n){
     for (int row = 0; row <n  ; row++)
        {
            //space
            for (int col = 0; col < n-row-1; col++)
            {
                cout<<" ";
            }
            
            //char
            char ch = 'A';
            int breakpoints=(2*row+1)/2;
            for (int col = 0; col < 2*row+1; col++)
            {
                cout<<ch;
                if (col<breakpoints)
                {
                    ch++;
                } else {
                    ch--;
                }
                
            }
            //space            
            for (int col = 0; col < n-row-1; col++)
            {
                cout<<" ";
            }
            cout<<endl;
        }
}
int main() {
    cout << "Loops and pattern basics" << endl;
    pattern14(5);
    
return 0;
}