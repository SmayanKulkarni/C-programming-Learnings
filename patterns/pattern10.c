#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

     int a=1;
    // for (int i = 0; i <=n; i++)
    // {
    //     for(int j = 0; j <= i; j++)     this is for pattern: 
    //     {                               *
    //         printf("*");                ***
    //     }                               ***** 
    // }                                   *******
    // printf("\n");

for (int i = 1; i <=n; i++)
{
    for (int j = 1; j <=n-i; j++)
    {
        printf(" ");
    }
    for (int k = 1; k <=a; k++)
    {
        printf("*");
    }
    a+=2;
    printf("\n");   
}
}