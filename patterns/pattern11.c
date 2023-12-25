#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

     int a=1;
    
for (int i = 1; i <=n; i++)
{
    int b=1;
    for (int j = 1; j <=n-i; j++)
    {
        printf(" ");
    }
    for (int k = 1; k <=a; k++)
    {
        printf("%d",b);
        b++;
    }
    a+=2;
    printf("\n");   
}
}