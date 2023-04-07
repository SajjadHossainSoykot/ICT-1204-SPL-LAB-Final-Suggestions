#include<stdio.h>
int main (){
    float C, F;
    printf("Enter the Fahrenheit value: ");
    scanf("%f", &F);
    C = (F-32)/18;
    printf("The Celcius value is: %f", C);
    return 0;
}
