#include <stdio.h>

void main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    int nsp=r;
    int nst=1;

    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=nsp;j++)
        {
            printf(" ");
        }

        for (int k = 1; k <=nst; k++)
        {
            printf("%c", (char)(k+64));
        }
        if(i>1)
        {

        
        for(int m=i-1;m>=1 ;m--)
        {
            printf("%c", (char)(m+64));
        }
        }
        nsp--;
        nst++;
        printf("\n");
    }
}