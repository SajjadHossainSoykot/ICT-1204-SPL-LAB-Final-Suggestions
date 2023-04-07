#include <stdio.h>
int main() {
    int n, i, j, k;
    printf("Enter the size of the matrices (nxn): ");
    scanf("%d", &n);
    int A[n][n], B[n][n], C[n][n];
    printf("Enter the elements of matrix A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the elements of matrix B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
                C[i][j] = 0;
                for (k = 0; k < n; k++) 
                    {
                    C[i][j] += A[i][k] * B[k][j];
                    }
        }
    }
    printf("The product matrix C is:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}
