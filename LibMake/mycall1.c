#include <stdio.h>
#include "myheader.h"

int main() {
printf("Module call \n");
int x =2;
int y=5;
int res = add(x,y);
printf("Addition is %d \n",res);

return 0;
}