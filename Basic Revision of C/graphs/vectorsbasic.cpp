#include <iostream>
#include <vector>
using namespace std;

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

void display2D(vector<vector<int>> &v){
cout << "Contents of 2D vector:" << endl;
    for (size_t i = 0; i < v.size(); ++i)
    {
        cout << "Row " << i << ": ";
        for (size_t j = 0; j < v[i].size(); ++j)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    cout << "Vector basics" << endl;
    vector<vector<int>> v1; // vector array
    dataIn2D(3,2,v1);
    display2D(v1);
    
    
    
return 0;
}