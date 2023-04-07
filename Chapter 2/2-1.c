#include<stdio.h>
int main ()
{
    int n, i;
    float sum = 0, a =1;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
    
        sum = sum + (1/a);
        a++;
    }
    printf("The sum of harmonie series is: %f", sum);
    return 0;
}