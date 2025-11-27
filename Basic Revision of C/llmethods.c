#include <stdio.h>
typedef struct LL{
    int data;
    struct LL *next;
}LL;
void display(struct LL *temp){
    struct LL *t = temp;
    while (t->next != NULL) {  //*(t(*next))  ====  t->next
        
        printf("The value of LL data is %d \n", t->data);
        t = t->next;
    }; 
     //printf("The value of LL data is %d \n", t->data); // For the null pointer value - this is temprory fix not a good good solution
}
int main() {
    printf("LL methods in C \n");
    LL l1,l2,l3;
    LL *lptr = &l1;
    l1.data = 10;
    // printf("Value of data is %d \n", l1.data);
    l1.next = &l2;
    l2.data = 25;
    l2.next = &l3;
    l3.data = 00; // Terminating node of LL
    l3.next = NULL;
    display(lptr);
    
return 0;
}