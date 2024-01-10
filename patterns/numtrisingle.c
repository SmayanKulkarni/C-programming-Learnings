#include <stdio.h>

void main()
{
    int n;
    printf("Enter the number of rwos: ");
    scanf("%d", &n);
    int nsp=0;
    int a=n;
    for(int i=1;i<=n;i++)
    {
        for (int k = 1; k <=nsp; k++)
        {
            printf(" ");
        }
        

        for (int j = a; j >=1;j--)
        {
             printf("*");
        }
        a-=2;
        printf("\n");
     nsp++;   
    }
}