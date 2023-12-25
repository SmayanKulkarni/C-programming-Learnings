#include <stdio.h>

void main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int a;
    for (int i = 0; i <n; i++)
    {
        if(i%2!=0) a=1;
        else a=0;
        for (int j = 0; j <=i; j++)
        {
            printf("%d ",a);
            if(a==0) a=1;
            else a=0;
        }
        printf("\n");
        
    }
    
     
}