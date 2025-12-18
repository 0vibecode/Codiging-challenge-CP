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
return 0;
}