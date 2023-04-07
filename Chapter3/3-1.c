#include<stdio.h>
int main()
{
    int n;
    float i, sum= 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum = sum + (1/i);
    }
    printf("The sum is %f", sum);
   return 0;
}