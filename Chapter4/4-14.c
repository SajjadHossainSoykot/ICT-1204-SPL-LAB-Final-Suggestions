#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int main() {
    int i;
    printf("Degree\tSin\t\tCos\n");
    for (i = 0; i <= 180; i += 15) {
        printf("%d\t%f\t%f\n", i, sin(i * PI / 180), cos(i * PI / 180));
    }
    return 0;
}
