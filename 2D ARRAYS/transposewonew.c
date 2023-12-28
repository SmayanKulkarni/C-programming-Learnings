// Print Transpose of Matrix entered by the user, without using new matrix

#include <stdio.h>

void main()
{
    int r,c;
    
    printf("Enter  the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int arr[r][c];

    for(int i=0;i<r;i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    for(int i=0;i<r;i++)
    {
        for (int j = 0; j <=i; j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
        
    }

    for(int i=0;i<r;i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }






    

}