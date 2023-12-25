#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for(int i =1;i<=n;i++)
    {
        for (int j = 0; j <=n-i ; j++) // to print successive n-1 spaces
        {
            printf(" ");
        }

        for (int k = 0; k <= n; k++)// to fill 4 asterisks after the spaces in a line as per condition
        {
            printf("*");
        }
        printf("\n");
        
    }
}