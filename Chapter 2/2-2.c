#include<stdio.h>
int main ()
{
    float a, p;
    printf("Input price: ");
    scanf("%f", &p);
    a = p*100;
    printf("Total Paisa %.0f", a);
    return 0;
}