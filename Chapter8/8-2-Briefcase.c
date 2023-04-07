#include <stdio.h>
#include <math.h>
int main() {
    int n, i;
    float mean, variance,deviation, std_deviation, sum = 0, sum_squared = 0;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);
    float arr[n];
    printf("Enter the elements of the list: ");
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    mean = sum / n;
    for (i = 0; i < n; i++) {
        deviation = (arr[i] - mean);
        sum_squared = sum_squared + deviation*deviation; 
    }
    variance = sum_squared / (float)n;
    std_deviation = sqrt(variance);
    printf("Mean: %f\n", mean);
    printf("The standard deviation of the list is: %f\n", std_deviation);
    return 0;
}
