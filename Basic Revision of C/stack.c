#include <stdio.h>
typedef struct Stack{
    int data;
    int size;
    int index;
    struct Stack *next;
    struct Stack *prev;
}Stack;
// isEmpty, isFull,createNode,push,pop,createStack

struct Stack * createStackNode(int size){
    struct Stack *s = (struct Stack *)malloc(size * sizeof(struct Stack));
    s->size = size;
    s->index = 0;
    s->next = NULL;
    s->prev = NULL;
    s->data = 0;
    return s;
}
struct Stack * createNode(){
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    return s;
}
struct Stack * push(struct Stack *p, int val){
    struct Stack *first = p;
    if(isFull(p)){
        return first; // stack is full
    } else {
        p->data = val; // data updated
        p->next = p+1; // something not correct here 
    }
    return first;
}
int isEmpty(struct Stack *s){
    if(s->index == 0 && s->prev == NULL && s->next == NULL){
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
struct Stack * push(struct Stack *s, int data){

}
struct Stack * pop(struct Stack *s){

}
int main() {
    printf("Stack Implementation \n");
return 0;
}
