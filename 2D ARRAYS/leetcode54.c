//Given an nxm matrix 'a', print all elements of the matrix in spiral order




#include <stdio.h>

void main()
{
    int m,n;

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int arr[r][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
     //spiral print
     printf("\n");

     int minr=0;
     int maxr=m-1;
     int minc=0;
     int maxc=n-1;
     int tne=m*n;
     int count =0;
    
    while(count<tne)
    {
        //print the minr

        for(int j=minc;j<=maxc;j++)
        {
            printf("%d ", a[minr][j]);
            count++;
        }
        minr++;

        //print the maxc

        for(int i=minr;i<=maxr;i++)
        {
            printf("%d ", a[i][maxc]);
            count++;
        }
        maxc--;
        //print maximum row

        for (int j = maxc; j>=minc; j--)
        {
            printf("%d ", a[maxr][j]);
            count++;
        }
        maxr--;

    }

    

}