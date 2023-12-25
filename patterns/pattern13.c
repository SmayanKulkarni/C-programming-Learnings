#include <stdio.h>

void main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int nsp = n / 2; // numberofspaces
    int nst = 1;     // number ofstars
    int ml = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++)
        {
            printf("*");
        } 
        if (i < ml)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }

        printf("\n");
    }
}