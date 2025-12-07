#include <stdio.h>
//#define MAX 50
/*
#ifdef
#ifndef
#if
#else
#elif
#endif
*/
#define WORD "abc"
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int main() {
    printf("This is Macros \n");
    //printf("The Macro Max is %c \n", WORD);
    printf("The Macro Square is %d \n", SQUARE(4));
    printf("The Macro Square is %d \n", MAX(2,5));
return 0;
}