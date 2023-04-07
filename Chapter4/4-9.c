#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a four-digit integer: ");
    scanf("%4d", &num);
   while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}
