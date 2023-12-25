#include <stdio.h>

int main()
{
    int i1=100;
    float f1=200.5;
    void *vptr;
    vptr=&i1;
    printf("i1 contains %i\n", *((int *)vptr));
    vptr=&f1;
    printf("f1 contains %f\n", *((float *)vptr));
}