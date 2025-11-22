#include <stdio.h>
typedef struct Node{
    int i;
    struct Node *next;

} Node;

int main() {
    printf("Structures and Pointer");
    Node N,M;
    N.i = 10;
    M.next = &N;
    printf("Value in Node N is %d \n ", N.i);
    printf("Address of Node N is %p \n ", &N);
    printf("Address of Node N in M.Next is %p \n ", M.next);
return 0;
}