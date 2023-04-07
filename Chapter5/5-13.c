#include<stdio.h>
int main()
{
    double d, e, inr;
    printf("Enter Dollars: ");
    scanf("%lf",&d);
    e = d*0.95;
    inr = d*81.44; 
    printf("Euro = %.2lf\nINR = %.2lf\n", e, inr);
}
