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
// Queue implementation using vector
template <class T>
void qPop(vector<T> &v,  vector<int>::iterator iter){
    v.erase(iter);
}
/*
Short answer: typename tells the compiler “this dependent name is a type.”

Declaration: template<typename T> — typename here is interchangeable with class.
Disambiguation inside templates: when a name depends on a template parameter the compiler can't know if it names a type or something else, so you must write typename:
Correct: typename T::iterator it;
Wrong (error): T::iterator it; // compiler may complain "T::iterator is not a type"
When not needed: for non-dependent names (e.g. std::vector<int>::iterator) you do not use typename.
Reason: resolves a parsing ambiguity in templates (the language requires it).
*/
int main() {
    cout << "Stack and Queue using vectors and STL" << endl;
    vector<int> vStack;
    vector<int> vQueue;
    vStack.push_back(5);
    vStack.push_back(15);
    vStack.push_back(25);
      
    //printData(vStack);
    vector<int> :: iterator iter = vStack.begin(); // creating iterator pointer
    // iter = iter.begin();
    // for (iter; iter != vStack.end(); ++iter)
    // {
    //     cout<<"The value is "<<*iter<<endl;
    // }
    vStack.insert(iter+3,45);
    printData(vStack);
    // vStack.erase(iter);
    qPop(vStack,iter);
    printData(vStack);
    // vStack.erase(iter+3);
    // printData(vStack);
return 0;
}