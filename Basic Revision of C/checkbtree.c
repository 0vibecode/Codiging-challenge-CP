#include <stdio.h>
#include <malloc.h>
//TODO: Implement these functions using C++ objects, STL stack again and finally in python
//TODO: Revise bigO notation and time and space complexity.
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

void inOrder(treeNode *root){
    if (root != NULL){
        inOrder(root->left);  // recursion 
        printf("%d ",root->data );
        inOrder(root->right); // recursion 
    }
}
// Recursion is equivalent to stack for function calls

// Function for checking binary tree is binary search tree
/*
            15
           /   \
        12      18
       /   \
    11      14
*/
int isBST(treeNode *root){  // * * Please understand the pattern for recursion not the actual implementation initially
    static treeNode *prev =NULL;
    if (root != NULL){  // inside we will traverse the btree
        //printf("%d",root->data);
        if(!isBST(root->left)){
            return 0;
        } 
        if(prev !=NULL && root->data <= prev->data){
            return 0;
        } 
        prev = root;
        return isBST(root->right);
    } else {
        return 1;
    }
}

treeNode* search(treeNode *root, int key){
    if(root == NULL){
        return NULL;
    }
    if (root->data == key){
        return root;
    }
    else if (root->data<key){
        return search(root->left,key);
    } else {
        return search(root->right,key);
    }
}
int main() {
    printf("Binary tree Traversal\n");
    
    /*Tree node using function*/
    treeNode *p = createTreeNode(15);
    treeNode *p1 = createTreeNode(12);
    treeNode *p2 = createTreeNode(18);
    treeNode *p3 = createTreeNode(11);
    treeNode *p4 = createTreeNode(14);
    // linking the tree node
    p->left = p1;
    p1->left = p3;
    p1->right = p4;
    p->right = p2;
    // Answer for preorder traversal should be 52467
    // Answer for postorder traversal should be 46275
    // Answer for inorder traversal should be 42657

    inOrder(p);
    printf("\n");
    int res = isBST(p);
    printf("%d",res);

return 0;
}