#include <stdio.h>

void main()
{
    int a[10] = {1, 3, 5, 7, 9};
    int b[10] = {2, 4, 6, 8, 10};
    int c[100];
    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i];
    }

    for (int j = 0; j < 5; j++)
    {
        c[j + 5] = b[j];
    }

    for (int k = 0; k < 10; k++)
    {
        for (int l = k + 1; l < 10; l++)
        {
            if (c[k] > c[l])
            {
                int temp = c[k];
                c[k] = c[l];
                c[l] = temp;
            }
        }
    }
    for (int m = 0; m < 10; m++)
    {
        printf("%d, ", c[m]);
    }
}