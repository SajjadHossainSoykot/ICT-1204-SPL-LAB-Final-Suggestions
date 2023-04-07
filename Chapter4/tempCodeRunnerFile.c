#include<stdio.h>
int main()
{   
    int a, b, c;
    printf("Enter the value of a, b & c: ");
    scanf("%d%d%d", &a, &b, &c);
    float x;
    x = a - b/3.0 +c*2.0-1;
    printf("Value of x: %.2f", x);
    return 0;
}