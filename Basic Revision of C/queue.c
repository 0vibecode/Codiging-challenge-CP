#include <stdio.h>
#include <stdlib.h>
typedef struct Queue{
    int data;
    int size;
    int index;
    struct Queue *next;
    struct Queue *prev;
    struct Queue *first;
}Queue;
// isEmpty, isFull,createNode,push,pop,createQueue

struct Queue * createQueueNode(int data, int size){
    struct Queue *s = (struct Queue *)malloc( sizeof(struct Queue));
    s->size = size;
    s->index = 0;
    s->next = NULL;
    s->prev = NULL;
    s->first = s;
    s->data = data;
    return s;
}


int isEmpty(struct Queue *s){
    if(s->index == 0 && s->prev == NULL && s->next == NULL){
        printf("The Queue is empty \n");
        return 1; // True
    }
    return 0; // false
}
int isFull(struct Queue *s){
    if(s->index == s->size){
        printf("The Queue is Full \n");
        return 1; //true
    }
    return 0; // false
}
struct Queue * push(struct Queue *s, int data){
    // check if isFull
    if(isFull(s)){
        return s;
    } else {
        struct Queue *newNode = (struct Queue *)malloc( sizeof(struct Queue));
        newNode->index = s->index+1;
        newNode->size = s->size;
        newNode ->data = data;
        newNode->next = NULL;
        newNode->prev = s;
        s->next = newNode;
        newNode->first = s->first;
        return newNode;
    }

}
struct Queue * pop(struct Queue *s){
    if(isEmpty(s)){
        return s;
    } else {
        struct Queue *temp = s->first; // address of first node for FIFO
         struct Queue *ntemp = temp->next; // address of second node for FIFO
        // update the first node to the next node
        struct Queue *newfirst = ntemp;
        ntemp->first = ntemp;
        while (ntemp->next != NULL ) //need to fix here 
        {
            ntemp->index = ntemp->index-1;
            ntemp->first =  newfirst;
            //temp->first = ntemp;
            ntemp = ntemp->next;
        }
        //ntemp->first = ntemp;
        free(temp);
        return newfirst;
    }

}
void displayQueue(struct Queue *s){
    struct Queue *temp = s->first; // first node of the queue
    if(isEmpty(s)){
        printf("Nothing to return - Queue is Empty. \n");
    } else {
        struct Queue *q = s->first;
        printf("Value at index %d is %d \n",q->index,q->data);
        while(temp->next != NULL){
            temp = temp->next;
            printf("Value at index %d is %d \n",temp->index,temp->data);
            
        }
    }

}
int main() {
    printf("Queue Implementation \n");
    struct Queue *st = createQueueNode(10,5);
    st = push(st,5);
    st = push(st,6);
    st = push(st,7);
    st = push(st,8);
    // st = push(st,9);  // working code
    // st = push(st,11);
    displayQueue(st);
    printf("Now doing the pop operation. \n");
    st=pop(st);
    st=pop(st);
    displayQueue(st);
    
return 0;
}
