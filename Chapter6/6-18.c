#include <stdio.h>
int main() {
    float marks;
    printf("Enter the total percentage of marks: ");
    scanf("%f", &marks);
    switch((int)marks/10) {
        case 10:
        case 9:
        case 8:
            printf("First Division");
            break;
        case 7:
        case 6:
            printf("Second Division");
            break;
        default:
            printf("Third Division");
    }
    return 0;
}
