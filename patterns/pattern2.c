#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        
        for (j = rows-i+1; j >=1; j--)
         {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
