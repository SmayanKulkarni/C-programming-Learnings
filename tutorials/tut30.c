#include <stdio.h>

int main()
{
    int a,rows;
    printf("Press 0 for triangular star pattern and 1 for reverse rectangular star pattern: \n");
    scanf("%d", &a);
    printf("Number of rows: ");
    scanf("%d",&rows);
    switch(a)
    {
        case 0:
        for(int i=0; i<rows; i++)
        {
            printf("*");
            for(int j=0; j<=i;j++)
            {
                printf("*");
            }
            printf("\n");

        }
        break;

        case 1:
        for(int i=0; i<rows; i++)
        {
            printf("*");
            for(int j=(rows-2); j>=i;j--)
            {
                printf("*");
            }


            
            printf("\n");


    }



    return 0;
}
}