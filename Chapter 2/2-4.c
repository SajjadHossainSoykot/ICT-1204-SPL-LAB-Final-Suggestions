#include<stdio.h>
int main ()
{
    float num1, num2, div;
    printf("Enter 1st Number and 2nd Number: ");
    scanf("%f%f", &num1, &num2);
    div = num1/num2;
    printf("The first number is %.4f\n", num1);
    printf("The second number is %.4f\n", num2);
    printf("The division is %.4f\n", div);
    return 0;
}
