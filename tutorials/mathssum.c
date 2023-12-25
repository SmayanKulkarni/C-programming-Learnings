#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,a,b;
    printf("Enter the corrusponding value\n");
    scanf("%f", &x);
     a = pow(x,4);
     b = x - (x*x - 35/(5*x*x*x*x));
    printf("%f", b);
    return 0;
}