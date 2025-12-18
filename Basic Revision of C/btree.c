#include <stdio.h>
#include <malloc.h>
typedef struct treeNode{
    int data;
    struct treeNode *left;
    struct treeNode *right;
} treeNode  ;
int main() {
    printf("Binary tree representation\n");
    treeNode *p = (treeNode *)malloc(sizeof(treeNode));
    p->left = NULL;
    p->right = NULL;
    printf("The tree root node is created \n");
    treeNode *p1 = (treeNode *)malloc(sizeof(treeNode));
    p1->left = NULL;
    p1->right = NULL;
    printf("The tree root left is created \n");
    treeNode *p2 = (treeNode *)malloc(sizeof(treeNode));
    p2->left = NULL;
    p2->right = NULL;
    printf("The tree right node is created \n");
    // linking the tree node
    p->left = p1;
    p->right = p2;
return 0;
}