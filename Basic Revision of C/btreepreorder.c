#include <stdio.h>
#include <malloc.h>
/*
Tree Traversal 
1. pre order traversal
root-> all nested subtree left -> all nested subtree right 
2. post order traversal 
all nested subtree left -> all nested subtree right ->root
3. inorder traversal
all nested subtree left -> ROOT -> all nested subtree right
*/
typedef struct treeNode{
    int data;
    struct treeNode *left;
    struct treeNode *right;
} treeNode;

treeNode * createTreeNode(int data){
    treeNode *n = (treeNode *)malloc(sizeof(treeNode));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    printf("The tree node has been created successfully \n");
    return n;
}

void preOrder(treeNode *root){
    if (root != NULL){
        printf("%d ",root->data );
        preOrder(root->left);  // recursion 
        preOrder(root->right); // recursion 
    }
}
// Recursion is equivalent to stack for function calls
int main() {
    printf("Binary tree Traversal\n");
    
    /*Tree node using function*/
    treeNode *p = createTreeNode(5);
    treeNode *p1 = createTreeNode(2);
    treeNode *p2 = createTreeNode(7);
    treeNode *p3 = createTreeNode(4);
    treeNode *p4 = createTreeNode(6);
    // linking the tree node
    p->left = p1;
    p1->left = p3;
    p1->right = p4;
    p->right = p2;
    // Answer for preorder traversal should be 52467

    preOrder(p);
return 0;
}