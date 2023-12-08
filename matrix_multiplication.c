#include <stdio.h>

int main() {
  int m, n, p, q;
  int a[10][10], b[10][10], c[10][10], i, j, k;

  printf("Enter the number of rows and columns of the first matrix: ");
  scanf("%d %d", &m, &n);
  printf("Enter the number of rows and columns of the second matrix: ");
  scanf("%d %d", &p, &q);

  if (n != p) {
    printf("Matrices cannot be multiplied\n");
    return 0;
  }

  printf("Enter the elements of the first matrix:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  printf("Enter the elements of the second matrix:\n");
  for (i = 0; i < p; i++) {
    for (j = 0; j < q; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  // Multiply the matrices
  for (i = 0; i < m; i++) {
    for (j = 0; j < q; j++) {
      c[i][j] = 0;
      for (k = 0; k < n; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  // Print the resulting matrix
  printf("The resulting matrix is:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < q; j++) {
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }

  return 0;
}