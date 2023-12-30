#include <stdio.h>
#include <stdbool.h>

void main()
{
    int arr1[] = {1, 2, 3, 1, 3, 4, 2, 3, 1, 2313, 2, 3, 123, 13};
    int arr1l = 14;

    for (int i = 0; i < 14; i++)
    {
        int m = 1;
        for (int j = 0; j < 14; j++)
        {
            if (arr1[i] == arr1[j] && i != j)
                m = 2;
        }
        if (m!=2)
        {
            printf("%d, ", arr1[i]);
        }
    }
}