#include <stdio.h>

void main()
{
  int n,a;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
a=(n/2)+1;
  for(int i = 1; i<=n;i++)
    {
      for(int j =1;j<=n;j++)
        {
          if(j==a|| i==a)
            printf("*");
          else
            printf(" ");
        }
      printf("\n");
    }
}