#include <stdio.h>
typedef struct LL{
    int data;
    struct LL *next;
}LL;
void display(struct LL *temp){
    //struct LL *t = temp;
    while (temp->next != NULL) {  //*(t(*next))  ====  t->next
        
        printf("The value of LL data is %d \n", temp->data);
        temp = temp->next;
    }; 
     //printf("The value of LL data is %d \n", t->data); // For the null pointer value - this is temprory fix not a good good solution
} 
struct LL* insert(struct LL *temp,int data){
    //struct LL *t = temp;
    if (temp->next != NULL){
        
        while (temp->next != NULL){
            temp = temp->next;
        }
        struct LL *newLL = (struct LL*)malloc(sizeof(struct LL));
        newLL->data = data;
        newLL ->next = NULL;
        temp->next = newLL;
        return temp;
    } else {
        printf("Its the first genesis Node \n");
        struct LL *newLL = (struct LL*)malloc(sizeof(struct LL));
        newLL->data = data;
        newLL ->next = NULL;
        temp->next = newLL;
        return temp;
    }
    
}
int main() {
    printf("LL methods in C \n");
    LL l1;
    LL *lptr = &l1;
    l1.data = 10;
    l1.next = NULL;
    lptr = insert(lptr,25);
    lptr = insert(lptr,45);
    lptr = insert(lptr,55);
    lptr = insert(lptr,65);
    
    display(lptr);
    
return 0;
}