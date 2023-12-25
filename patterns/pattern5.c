#include <stdio.h>

int main(void) 
{
  int n,a;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  printf("Enter the number of columns: ");
  scanf("%d", &a);

  for (int i = 1; i <= n; i++) {
    if (i == 1 || i == n) {
      for (int j = 1; j <= a; j++) {
        printf("*");
      }
      printf("\n");

    } else {
      for (int k = 1; k <= a; k++) {
        if (k == 1 || k == a) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
  }
}

