#include <stdio.h>

void multiplyMatrices(int m, int n, int p, int q, int A[10][10], int B[10][10], int result[10][10]) {
   if (n != p) {
      printf("The matrices cannot be multiplied.\n");
      return;
   }
    
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < q; j++) {
         result[i][j] = 0;
         for (int k = 0; k < n; k++) {
            result[i][j] += A[i][k] * B[k][j];
         }
      }
   }
}

void printMatrix(int m, int n, int matrix[10][10]) {
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         printf("%d ", matrix[i][j]);
      }
      printf("\n");
   }
}

int main() {
   int m, n, p, q;

   printf("Enter dimensions of first matrix: ");
   scanf("%d %d", &m, &n);

   int A[10][10];
   printf("Enter elements of first matrix in row major order:\n");
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &A[i][j]);
      }
   }

   printf("Enter dimensions of second matrix: ");
   scanf("%d %d", &p, &q);

   int B[10][10];
   printf("Enter elements of second matrix in column major order:\n");
   for (int i = 0; i < p; i++) {
      for (int j = 0; j < q; j++) {
         scanf("%d", &B[j][i]);
      }
   }

   int result[10][10];
   multiplyMatrices(m, n, p, q, A, B, result);

   printf("Matrix A:\n");
   printMatrix(m, n, A);

   printf("Matrix B:\n");
   printMatrix(p, q, B);

   printf("Product of Matrix A and Matrix B:\n");
   printMatrix(m, q, result);

   return 0;
}