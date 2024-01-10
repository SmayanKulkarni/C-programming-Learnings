#include <stdio.h>

void main()
{
    int a = 10, b = 5;
    int gcd;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    printf("%d", gcd);
}