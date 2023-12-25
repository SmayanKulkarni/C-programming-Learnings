#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int a=1;
    for (i = 1; i <= rows; i++)
    {
        
        int a=i;
        for (j = 1; j <= i; j++) {
            
            printf("%d",a);
            a--;
        }
        

        printf("\n");
    }

    return 0;
}
