#include <stdio.h>
//#define FEATURE_ENABLED 10  // You you define this line here the program will not compile as we have #ifdef 
#ifdef FEATURE_ENABLED
    // Code to include if FEATURE_ENABLED is defined
    printf("Feature is enabled\n");
#endif
//#define FEATURE_ENABLED 10
#define DEBUG false
#ifndef DEBUG
    // Code to include if DEBUG is not defined
    printf("Debug mode is off\n");
#endif
//#define DEBUG true  // You you define this line here the program will not compile as we have #ifndef 
#ifndef DEBUG1 
#define DEBUG1 
    // Code to include if DEBUG is not defined
    //printf("Debug mode is off\n");
#endif
int main() {
    printf("Macros in C \n");
   
return 0;
}