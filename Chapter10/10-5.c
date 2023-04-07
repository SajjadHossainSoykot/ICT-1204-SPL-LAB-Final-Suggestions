#include <stdio.h>

void generateFibonacci(int n) 
{
    int i;
    int f1 = 1, f2 = 1, next;
    if (n < 1) {
        printf("Invalid input.\n");
    } else if (n == 1) {
        printf("%d\n", f1);
    } else if (n == 2) {
        printf("%d %d\n", f1, f2);
    } else {
        printf("%d %d ", f1, f2);
        for (i = 2; i < n; i++) {
            next = f1 + f2;
            printf("%d ", next);
            f1 = f2;
            f2 = next;
        }
        printf("\n");
    }
}

int main() {
    int n1 = 5, n2 = 10, n3 = 15;
    printf("First %d Fibonacci numbers: ", n1);
    generateFibonacci(n1);
    printf("First %d Fibonacci numbers: ", n2);
    generateFibonacci(n2);
    printf("First %d Fibonacci numbers: ", n3);
    generateFibonacci(n3);
    return 0;
}
