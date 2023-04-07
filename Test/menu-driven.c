#include<stdio.h>
void hello()
{
    printf("Hello\n");
}
int printNum(int n)
{
    printf("The number is %d\n", n);
}
int add(int a, int b)
{
    return a + b;
}
int getNum()
{
    int n;
    printf("Enter number n: ");
    scanf("%d", &n);
    return n;
}
int main()
{
    while(1)
    {
    int a, b, choice, result;
    printf("\nMenu\n");
    printf("1. Print Hello\n");
    printf("2. Print a Number\n");
    printf("3. Add two Number\n");
    printf("4. Get a Number\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        hello();
        break;
    case 2:
        printNum(getNum());
        break;
    case 3:
        printf("Enter two numbers: ");
        scanf("%d%d", &a, &b);
        result = add(a,b);
        printf("The sum of %d %d is %d\n", a,b, result);
        break;
    case 4:
        printf("The number is %d\n", getNum());
        break;
    case 5:
        return 0;
    default:
        printf("Invalid Choice\n");
        break;
    }
    }
}