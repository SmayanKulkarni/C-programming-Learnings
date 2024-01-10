#include <stdio.h>

int power(int base, int exp)
{
    if(exp==0) return 1;
    return base*power(base,exp-1);
}

void main()
{
    int a=power(2,4);
    printf("2^4 : %d", a);
}