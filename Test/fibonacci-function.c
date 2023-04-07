#include<stdio.h>
int fib(int n)
{
    int i;
    int f1 = 1, f2 = 1, next;
    do
    {
        printf("%d ", f1);
        next = f1 + f2;
        f1 = f2;
        f2 = next;
        n--;
    } while (n!=0);
    printf("\n");
}
int main()
{
    int n1 = 5, n2 = 10, n3 =15;
    printf("Fib-%d: ", n1);
    fib(n1);
    printf("Fib-%d: ", n2);
    fib(n2);
    printf("Fib-%d: ", n3);
    fib(n3);
}