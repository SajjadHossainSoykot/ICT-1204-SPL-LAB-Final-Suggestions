#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n], *p;
    p = &a[0];
    printf("Enter elements of array: ");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d", p);
        p++;
    }
    p = &a[n-1];
     for (int  i = 0; i < n; i++)
    {
        printf("%d ", *p);
        p--;
    }
}