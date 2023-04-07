#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, root1, root2, discriminant;
    printf("Enter the values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Root 1: %.2f\tRoot 2: %.2f", root1,root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2*a);
        printf("Root 1: %.2f\tRoot 2: %.2f", root1,root2);
    }
    else {
        printf("Complex roots");
    }
    return 0;
}
