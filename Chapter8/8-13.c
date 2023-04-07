#include<stdio.h>
int main()
{
    int m, n;
    printf("Enter Matrix size(mxn): ");
    scanf("%d%d",&m,&n);
    int i, j, A[m][n], B[m][n];
    for (i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            B[j][i] = A[i][j];
        }
    }
    printf("Transoose Matrix: \n");
    for (i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}