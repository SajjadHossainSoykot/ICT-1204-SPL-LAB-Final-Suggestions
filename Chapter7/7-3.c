#include <stdio.h>
int main() {
    int m, i = 1, j = 1, k;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &m);
    do {
        printf("%d ", i);
        k = i + j;
        i = j;
        j = k;
        m--;
    } while (m > 0);
    return 0;
}
