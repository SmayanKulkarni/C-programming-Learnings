#include <stdio.h>

int main()
{
    int *iptr;
    int **ptriptr;
    int data;
    iptr=&data;
    ptriptr=&iptr;
    *iptr=100;
    printf("The vaariable data contains: %d\n",data);

    **ptriptr=200;
    printf("The variable data contains: %d\n", data);

}