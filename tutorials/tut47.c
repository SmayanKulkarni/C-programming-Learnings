#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // use of malloc
    int *ptr;
    ptr = (int *)malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value number %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("The the value at %d of this array is %d \n", i, ptr[i]);
        scanf("%d", &ptr[i]);
    }

    return 0;
}