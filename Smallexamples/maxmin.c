#include <stdio.h>
#include <conio.h>

void maxmin(int a,int b)
{
    if(a < b)
    {
        printf(" %d is more than %d\n",b,a);
    }
    else
    {
        printf(" %d is less than %d\n",b,a);
    }
}

void main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);

    maxmin(x,y);
}