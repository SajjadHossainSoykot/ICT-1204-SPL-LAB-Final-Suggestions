#include<stdio.h>
void main()
{
    int numrows=5;
    for(int rowno=1; rowno<=numrows; rowno++)
    {
        for(int space=numrows-rowno+1; space<numrows; space++)
        {
            printf("  ");
        }
        for(int num = (numrows-rowno+1); num>1; num-- )
        {
            printf("%d ", num);
        }
        printf("1\n");
    }
}