#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int ctr = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            ctr++;
        if (ctr > 2)
        {
            printf("Not a prime number");
            break;
        }
    }

    if(ctr<=2)
    {
        printf("Prime Number");
    }
}