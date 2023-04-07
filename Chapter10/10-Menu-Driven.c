#include <stdio.h>
// function with no arguments and no return values
void printHello() {
    printf("Hello!\n");
}
// function with arguments but no return values
void printNum(int num) {
    printf("The number is: %d\n", num);
}
// function with arguments and return values
int add(int a, int b) {
    return a + b;
}
// function with no arguments but return values
int getNum() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}
int main() {
    int choice, a, b, result;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Print Hello\n");
        printf("2. Print a number\n");
        printf("3. Add two numbers\n");
        printf("4. Get a number\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printHello();
                break;
            case 2:
                printNum(getNum());
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                result = add(a, b);
                printf("The sum of %d and %d is: %d\n", a, b, result);
                break;
            case 4:
                printf("The number is: %d\n", getNum());
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice!\n");
                break;
        }
    }
    return 0;
}
