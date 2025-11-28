#include <stdio.h>
typedef struct Stack{
    int data;
    int size;
    int index;
    struct Stack *next;
}Stack;
// isEmpty, isFull, push,pop,createStack
struct Stack * createStack(int size){
    struct Stack *p = (struct Stack *)malloc(size *sizeof(struct Stack));
    p->size = size;
    p->next = NULL;
    p->index =0;
    return p;
}
int isEmpty(struct Stack *p){
    if(p->next == NULL){
        print("The stack is empty \n");
        return 1; // True
    }
    return 0; // false
}
int isFull(struct Stack *p){
    if(p->index == p->size){
        print("The stack is Full \n");
        return 1; //true
    }
    return 0; // false
}
int main() {
    printf("Stack Implementation \n");
return 0;
}
