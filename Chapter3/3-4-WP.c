#include <stdio.h>
int main() {
    float fahrenheit, celsius;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8;
    printf("The temperature in Celsius is: %.2f", celsius);
    return 0;
}
