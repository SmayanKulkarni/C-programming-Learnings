#include <stdio.h>

void main()
{
    int sum,digit,x=99,copy,n;

    printf("Enter a number:");
    scanf("%d",&n);

    while(n!=0)
    {
        x++;
        copy=x;
        sum=0;
        while(x!=0)
        {
            digit=x%10;
            sum=sum+(digit*digit*digit);
            x=x/10;
        }
        if(sum==copy)
        {
            printf("%d ",copy);
            n--;
        }
        x=copy;
    }
}