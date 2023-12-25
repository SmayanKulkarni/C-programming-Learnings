#include <stdio.h>

void main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n); 
    for (int i = 1; i <= n; i++)
    {
        for(int j =1;j<=n;j++)
        {
            if(i==j || i+j==6)
            {
                printf("*");
            }
            else x  
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}