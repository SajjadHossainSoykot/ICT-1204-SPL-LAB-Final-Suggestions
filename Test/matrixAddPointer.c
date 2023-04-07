#include<stdio.h>
void addMatrix(int row, int col, int (*a)[col], int (*b)[col], int (*c)[col])
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            c[i][j] = a[i][j]+ b[i][j];
        }
        
    }
    
}
int main()
{
    int m ,n;
    printf("Enter row and colum size: ");
    scanf("%d%d", &m, &n);
    int a[m][n], b[m][n], c[m][n];
    printf("Enter Matrix A:\n");
    for (int i = 0; i < m; i++)
    {
        for ( int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("Enter Matrix B:\n");
    for (int i = 0; i < m; i++)
    {
        for ( int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }
    addMatrix(m,n,a,b,c);
    printf("Result Matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for ( int j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}