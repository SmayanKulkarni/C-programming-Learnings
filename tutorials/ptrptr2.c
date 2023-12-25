#include <stdio.h>

int main()
{
    int *iptr, var1, var2;
    iptr=&var1;
    *iptr=25;
    *iptr+=10;
    printf("The value of var1 is: %d\n", var1);
    iptr=&var2;
    *iptr =45;
    *iptr-=30;
    printf("The value of var2 is: %d\n", var2);
}