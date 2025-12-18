#include <iostream>
#include <stack>
#include <queue>
using namespace std;
class treeNode{
    public:
        int data;
        treeNode *left;
        treeNode *right;
        treeNode(){}  // default constructor
        treeNode(int data){
            this ->data = data;
            this->left = NULL;
            this->right = NULL;
            cout<<"treeNode created successfully"<<endl;
        }
        void displayData(treeNode *ptr){
            cout<<"The data of treeNode is "<<ptr->data<<endl;
        }
};
void traverseInOrder(treeNode &t){
    treeNode *prev; // to store previous node
    treeNode *next; // to store previous node
    //queue<int> q;
    while(t->left != NULL){
        next = t->left;
        prev = t;
        t = t->left;
    }

}
int main() {
    cout << "Trees using C++" << endl;
    treeNode *p = new treeNode(5);
    p->displayData(p);
    treeNode *p2 = new treeNode(2);
    treeNode *p3 = new treeNode(7);
    treeNode *p4 = new treeNode(1);
    treeNode *p5 = new treeNode(3);
    p->left = p2;
    p->right = p3;
    p2->left = p4;
    p2->right = p5;

return 0;
}