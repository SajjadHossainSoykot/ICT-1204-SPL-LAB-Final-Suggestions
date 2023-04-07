#include<stdio.h>
int p(int n)
{   
    int prime = 0;
    for (int i = 1; i <=n; i++)
    {
        if(i!=1 && i!=n && n%i==0) {prime++; break;}
    }
    return prime;
}
int main()
{
    int n, prime = 0, count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    p(n);
    if(prime>0)printf("Not Prime Number\n");
    else printf("Prime Number\n");
    
    for(int j = 101; j<200 ; j++)
    {
        int s = p(j);
        if(s==0)count++;
    }
    printf("Total prime numbers between 100 and 200: %d", count);
}
