#include <iostream>
#include <vector>
using namespace std;
int main() {
    cout << "Vector basics" << endl;
    vector<int> v1[3]; // vector array
    //vector<int> temp;
    int temp[5];
    for (int i = 0; i < 5; i++)
    {
        // vector<int> temp;
        int data;
        cout<<"enter the data"<<endl;
        cin>>data;
        // temp[i] = data;

    }
    
    v1[0].push_back(temp)
    for (int i = 0; i < v1[0].size(); i++)
    {
        cout<<" "<<v1[0][i]<<" ";
    }
    
return 0;
}