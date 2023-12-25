#include <stdio.h>

int powerlog(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    int recAns;

    int x = powerlog(a, b / 2);
    recAns = x * x;
    return recAns;
}
void main()
{
    int a;
    printf("Enter base: ");
    scanf("%d", &a);
    int b;
    printf("Enter power: ");
    scanf("%d", &b);
    int p = powerlog(a, b);
    printf("The power of %d raise to %d is: %d", a, b, p);
}