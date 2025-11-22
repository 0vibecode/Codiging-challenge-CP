#include <stdio.h>

int main() {
    printf("Structures and Pointer");
    int i=10; // declaring integer with value 10
    int *iptr = &i; // declaring integer pointer
    //iptr = &i; // pointer iptr is reffering to i  
    printf("The value of integer i is %d \n", i);
    printf("The value of integer i using pointer iptr is %d \n", *iptr);
    printf("The address of integer i using pointer iptr is %p \n", iptr);
    printf("The address of integer i using  address of operator is %p \n", &i);
return 0;
}