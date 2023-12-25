#include <stdio.h>

void main()
{
    int n;
    printf("Enter the number of rows ");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        if(i%2==0)
        {
           for (int k = 1; k <=i; k++)
        {
            printf("%c ", k+64);
        } 
        printf("\n");
        }
        else
        {
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        }
        
        
        printf("\n");
    }
    
    
}