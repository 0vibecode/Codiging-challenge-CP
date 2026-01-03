#include <iostream>
#include <vector>
using namespace std;
int main() {
    cout << "Vector basics" << endl;
    vector<int> v1[5]; // vector array
    //vector<int> temp;
    //int temp[5];
    for (int i = 0; i < 5; i++)
    {
        // vector<int> temp;
        int data;
        cout<<"enter the data"<<endl;
        cin>>data;
        // temp[i] = data;
        v1[i].push_back(data); // push back for array of vectors

    }
    
    //v1[0].push_back(temp)
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < v1[j].size(); i++)
        {
            cout<<" "<<v1[j][i]<<" ";
        }
        cout<<endl;
    }
    
    
    
return 0;
}