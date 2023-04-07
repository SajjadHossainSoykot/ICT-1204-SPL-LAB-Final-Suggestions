#include <stdio.h>

int prime(int n) {
    int i;
    if (n <= 1) {
        return 0;
    }
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num1;
    printf("Enter a number: ");
    scanf("%d", &num1);
    if (prime(num1)) {
        printf("%d is a prime number.\n", num1);
    } else {
        printf("%d is not a prime number.\n", num1);
    }
    return 0;
}
