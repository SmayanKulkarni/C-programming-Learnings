#include <stdio.h>

void main()
{
    int n;
    printf("Enter the number of rwos: ");
    scanf("%d", &n);
    int nsp=n-1;
    for(int i=1;i<=n;i++)
    {
        for (int k = 1; k <=nsp; k++)
        {
            printf(" ");
        }
        

        for (int j = 1; j <=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
     nsp--;   
    }
}