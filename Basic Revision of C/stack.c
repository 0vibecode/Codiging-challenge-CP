#include <stdio.h>
#include <stdlib.h>
typedef struct Stack{
    int data;
    int size;
    int index;
    struct Stack *next;
    struct Stack *prev;
}Stack;
// isEmpty, isFull,createNode,push,pop,createStack

struct Stack * createStackNode(int data, int size){
    struct Stack *s = (struct Stack *)malloc( sizeof(struct Stack));
    s->size = size;
    s->index = 0;
    s->next = NULL;
    s->prev = NULL;
    s->data = data;
    return s;
}
struct Stack * createNode(){
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    return s;
}


int isEmpty(struct Stack *s){
    if(s->index == 0 && s->prev == NULL && s->next == NULL){
        printf("The stack is empty \n");
        return 1; // True
    }
    return 0; // false
}
int isFull(struct Stack *s){
    if(s->index == s->size){
        printf("The stack is Full \n");
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
    if(isEmpty(s)){
        return s;
    } else {
        struct Stack *temp = s;
        // return node 2 address after deleting node 3
        struct Stack *p = s->prev;
        //index update
        //delete operation
        free(s);
        return p;
    }

}
void displayStack(struct Stack *s){
    struct Stack *temp = s;
    if(isEmpty(s)){
        printf("Nothing to return - Stack is Empty. \n");
    } else {
        printf("Value at index %d is %d \n",s->index,s->data);
        while(temp->prev != NULL){
            temp = temp->prev;
            printf("Value at index %d is %d \n",temp->index,temp->data);
            
        }
    }

}
int main() {
    printf("Stack Implementation \n");
    struct Stack *st = createStackNode(10,5);
    st = push(st,5);
    st = push(st,6);
    st = push(st,7);
    st = push(st,8);
    // st = push(st,9);  // working code
    // st = push(st,11);
    displayStack(st);
    printf("Now doing the pop operation. \n");
    st=pop(st);
    st=pop(st);
    displayStack(st);
    
return 0;
}
