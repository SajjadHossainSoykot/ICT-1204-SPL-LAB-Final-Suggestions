#include<stdio.h>
int prime(int n)
{
    int prime = 0;
    if(n<=1) return 0;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0) return 0; 
    }
    return 1;
}
int main()
{
    int num;
    scanf("%d", &num);
    if(prime(num))printf("The number is Prime\n");
    else printf("The number is not Prime\n");
}