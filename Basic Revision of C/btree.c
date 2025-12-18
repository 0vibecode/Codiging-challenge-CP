#include <stdio.h>
#include <malloc.h>
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
int main() {
    printf("Binary tree representation\n");
    // treeNode *p = (treeNode *)malloc(sizeof(treeNode));
    // p->data = 5;
    // p->left = NULL;
    // p->right = NULL;
    // printf("The tree root node is created \n");
    // treeNode *p1 = (treeNode *)malloc(sizeof(treeNode));
    // p1->data = 2;
    // p1->left = NULL;
    // p1->right = NULL;
    // printf("The tree root left is created \n");
    // treeNode *p2 = (treeNode *)malloc(sizeof(treeNode));
    // p2->data = 7;
    // p2->left = NULL;
    // p2->right = NULL;
    // printf("The tree right node is created \n");
    /*Tree node using function*/
    treeNode *p = createTreeNode(5);
    treeNode *p1 = createTreeNode(2);
    treeNode *p2 = createTreeNode(7);
    // linking the tree node
    p->left = p1;
    printf("Left liking successfully \n");
    p->right = p2;
    printf("right liking successfully \n");
return 0;
}