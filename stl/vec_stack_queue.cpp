#include <iostream>
#include <vector>
using namespace std;
// We cannot implement Queue directly like we did for stack, use iterator
template <class T>
void printData(vector<T> v){
for (int i = 0; i < v.size(); i++)
    {
        cout<<"The vector at index "<<i<<" is "<<v[i]<<endl;
    }
}
int main() {
    cout << "Stack and Queue using vectors and STL" << endl;
    vector<int> vStack;
    vector<int> vQueue;
    vStack.push_back(5);
    vStack.push_back(15);
    vStack.push_back(25);
    // printData(vStack);
    // for (int i = 0; i < vStack.size(); i++)
    // {
    //     cout<<"The vector at index "<<i<<" is "<<vStack[i]<<endl;
    // }
    // vStack.pop_back();
    // vStack.push_back(0);
    // for (int i = 0; i < vStack.size(); i++)
    // {
    //     cout<<"The vector at index "<<i<<" is "<<vStack[i]<<endl;
    // }
  
    printData(vStack);
    
return 0;
}