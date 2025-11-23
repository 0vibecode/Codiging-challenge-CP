#include <stdio.h>
typedef struct Node{
    int i;
    struct Node *next;

} Node;

int main() {
    printf("Structures and Pointer \n");
    Node N1,N2,N3;
    Node *ptr = &N1;
    N1.i = 10;
    N1.next = &N2;
    N2.i = 25;
    N2.next = &N3;
    N3.i = 45;
    N3.next = NULL;
    // printf("Value in Node N is %d \n ", N1.i);
    // printf("Address of Node N1 is %p \n ", &N1);
    // printf("Address of Node N2 is %p \n ", &N2);
    // printf("Address of Node N2 in N1.Next is %p \n ", N1.next);
   
    for(int i=0;i<4;i++){
        if(ptr->next != NULL){
            printf("Value is %d \n", ptr->i);
        }
        ptr = ptr->next;
    }
return 0;
}