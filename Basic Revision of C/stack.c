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
    struct Stack *s = (struct Stack *)malloc( sizeof(struct Stack));
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


int isEmpty(struct Stack *s){
    if(s->index == 0 && s->prev == NULL && s->next == NULL){
        print("The stack is empty \n");
        return 1; // True
    }
    return 0; // false
}
int isFull(struct Stack *s){
    if(s->index == s->size){
        print("The stack is Full \n");
        return 1; //true
    }
    return 0; // false
}
struct Stack * push(struct Stack *s, int data){
    // check if isFull
    if(isFull(s)){
        return s;
    } else {
        struct Stack *newNode = (struct Stack *)malloc( sizeof(struct Stack));
        newNode->index = s->index+1;
        newNode->size = s->size;
        newNode ->data = data;
        newNode->next = s->next;
        newNode->prev = s;
        s->next = newNode;
        return newNode;
    }

}
struct Stack * pop(struct Stack *s){

}
int main() {
    printf("Stack Implementation \n");
return 0;
}
