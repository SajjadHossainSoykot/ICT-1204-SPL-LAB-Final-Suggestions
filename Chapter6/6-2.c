#include<stdio.h>
int main()
{
    int i, sum=0;
    for (int i = 101; i < 200; i++)
    {
        if (i%7==0)
        {
            sum = sum + i;
        }
    }
    printf("Sum is %d",sum);
}