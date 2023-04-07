#include<stdio.h>
int main()
{
    char s[100];
    int i=0;
    printf("Enter a string: ");
    scanf("%s", &s);
    while (s[i]!='\0')
    {
        i++;
    }
    printf("String Length: %d", i);
}