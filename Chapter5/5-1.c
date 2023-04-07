#include<stdio.h>
int main()
{
    char s[10],d[11];
    printf("Enter the string: ");
    scanf("%4s%10s",s,d);
    printf("%s %s\n",s,d);
    printf("%s\n%s\n",s,d);
    printf("%.1s.%.1s.",s,d);
}