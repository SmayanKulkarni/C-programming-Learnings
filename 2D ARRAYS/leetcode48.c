
// rotate matrix by 90 degree

#include <stdio.h>

void main()
{
    int r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    //transpose
    for(int i=0;i<r;i++)
    {
        for(int j = 0; j<=i;j++)
        {
            int temp=arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i]=temp;
        }
    }
    //printing transpose
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    //rotate 
    for (int i = 0; i < r; i++)
    {
        int j = 0;
        int k = n - 1;
        while (j<k)
        {
            int temp=arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
        
    }

    //printing rotated 
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


}