#include <iostream>
#include <vector>
using namespace std;

void displayVec1D(vector<int> &v)
{
    cout << " The size of vector is " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << " " << v[i] << " ";
    }
    cout << endl;
}
void dataIn1D(int N, vector<int> &v)
{
    for (int i = 0; i < N; i++)
    {
        int temp;
        cout << "Insert the value of element at index " << i << endl;
        cin >> temp;
        v.push_back(temp);
        cout << " The value pushed at index " << i << " is " << temp << endl;
    }
}
void dataIn2D(int row, int col, vector<vector<int>> &v){
    for (int i = 0; i < row; i++)
    {
        vector<int> temp; // fresh row vector for each i
        for (int j = 0; j < col; j++)
        {
            int data1;
            cout << "Insert element for row " << i << " col " << j << ": ";
            cin >> data1;
            temp.push_back(data1);
        }
        v.push_back(temp);
    }

}
/*
    v1[0]: [vector elements]
    v1[1]: [vector elements]
    v1[2]: [vector elements]
    ...
    ...
    ...
    v1[N]: [vector elements]
    */
int main()
{
    cout << "Nested Vectors" << endl;
    int row, col;
    cout << " Enter the number of element in array row and col respectively " << endl;
    cin >> row >> col;
    vector<vector<int>> v2; // 2D Vectors
    // vector v2 --> v2[0] --> vector temp push_back
    // internal container of vector<int>
    // vector<int> temp;
    // temp.push_back(2);
    // temp.push_back(3);
    // temp.push_back(5);
    // v2.push_back(temp);
    // cout<<"Vector v2[0][0] "<<v2[0][0]<<" "<<endl;
    // cout<<"Vector v2[0][1] "<<v2[0][1]<<" "<<endl;
    // cout<<"Vector v2[0][2] "<<v2[0][2]<<" "<<endl;
    dataIn2D(row,col,v2);
    
    // Print the entire 2D vector safely
    cout << "Contents of 2D vector:" << endl;
    for (size_t i = 0; i < v2.size(); ++i)
    {
        cout << "Row " << i << ": ";
        for (size_t j = 0; j < v2[i].size(); ++j)
        {
            cout << v2[i][j] << " ";
        }
        cout << endl;
    }

    // v2.push_back(3);
    // v2.push_back(5);

    return 0;
}