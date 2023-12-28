#include <stdio.h>

int fib(int a)
{
    if(a==0) return 0;
    if(a==1) return 1;
    
    return fib(a-1) + fib(a-2);
}

void main()
{
    int n;
    printf("Enter how many numbers series you need: ");
    scanf("%d", &n);

    for(int i=0;i<n-1;i++)
    {
        if(i<=n) printf("%d, ", fib(i));
        else printf(".");
    }
}