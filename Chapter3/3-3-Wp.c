#include <stdio.h>
int main() {
    int n, i;
    float num, sum = 0.0, avg;
    printf("Enter value of N: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%f", &num);
        sum += num;
    }
    avg = sum / n;
    printf("The average of the numbers is: %.2f", avg);
    return 0;
}
