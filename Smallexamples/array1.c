#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,n;
    float a[50], large, small;
    printf("Enter number of elements in the array\n");
    scanf("%d", &n);
    printf("Now entering the values of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    large=a[0];
    small=a[0];

    //to find the largest or smallest, now
    for (int i = 0; i < n; i++)
    {
        if(large<a[i])
        {
            large=a[i];
        }
        else if (small>a[i])
        {
            small=a[i];
        }
        
    }
    printf("The largent element in the arary is: %f", large);
    printf("The smallest element in the arary is: %f", small);
    
    
    return 0;

    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
   char array[] = {'F', 'A', 'D', 'B', 'C'};
   int size = sizeof(array)/sizeof(array[0]);
}