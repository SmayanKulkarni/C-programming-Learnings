#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, m, n, ip, k, p, q;
    printf("Input row and column of A matrix\n");
    scanf("%d %d", &m, &n);
    printf("Input row and column of B matrix\n");
    scanf("%d %d", &k, &q);
    if (n == k)
    {
        printf("The resultant matrix formed will be %d X %d", m, q);
        printf("Input A Matrix");
        read_mat(a, m, n);
        printf("Input B Matrix");
        read_mat(b, k, q);

        // for multiplication

        for (int i = 0; i < m; ++i) // there will be m rows and q columns
        {
            for (int j = 0; i < q; ++j)
            {
                c[i][j] = 0;
                for (int ip = 0; ip < n; ++ip)
                {
                    c[i][j] = c[i][j] + (a[i][ip] * b[ip][j]);
                }
            }
        }
        write_mat(c, m, q);

        return 0;
    }
    else
    {
        printf("Matrix cannot be multiplied");
    }

    read_mat(a, m, n) int a[10][10], m, n;
    {
        int i, j;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
    }
    write_mat(a, m, n)
    {
     int a[10][10], m, n;
    
        int i, j;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d", a[i][j]);
                printf("\n");
            }
        }
    }
}

