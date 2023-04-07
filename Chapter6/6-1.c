#include<stdio.h>
int main()
{
    int a;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &a);
    printf("Without using else\n");
    if (a%2==0) printf("THE NUMBER IS EVEN\n");
    if (a%2!=0) printf("THE NUMBER IS ODD\n");
    printf("Using else\n");
    if (a%2==0) printf("THE NUMBER IS EVEN\n");
    else printf("THE NUMBER IS ODD\n");
}