#include<stdio.h>
int main()
{
    int n, m;
    printf("Enter size of Array A and B: ");
    scanf("%d%d", &m, &n);
    int a[m], b[n];
    printf("Enter Array A[%d]: ",m);
    for(int i=0 ; i<m ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Array B[%d]: ",n);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("The New array C[%d] is: \n", m+n);
    int c[m+n];
    for(int i=0 ; i<m+n ; i++)
    {
        if(i<m)  c[i] = a[i];
        else c[i] = b[i-m]; 
    }
    for(int i=0; i<m+n ; i++){
        for(int j=i; j<m+n; j++){
            int temp;
            if(c[i]>c[j])
                {
                    temp=c[i];
                    c[i]=c[j];
                    c[j]=temp;
                }
        }
    }
    for(int i=0 ; i<m+n ; i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n");
}