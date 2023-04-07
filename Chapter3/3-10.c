#include<stdio.h>
int main()
{
    int d, a, years, weeks, days;
    printf("Enter total days: ");
    scanf("%d", &d);
    // years = d/365;
    // a = d%365;
    // weeks = a/7;
    // a = a%7;
    // days = a;
    years = d/365;
    d = d%365;
    weeks = d/7;
    d = d%7;
    days=d;
    printf("Years: %d\tWeeks: %d\tDays: %d\n", years, weeks,days);
   return 0;
}