#include<stdio.h>
int main()
{   
    int rowno, rowdata, k=1;
    for (rowno = 1; rowno <= 20 ; rowno++)
    {
        for ( rowdata = 1; rowdata <=rowno; rowdata++)
        {
            printf("%d ", k);
            k++;
            if(k==92)break; 
        }
        printf("\n");
        if(k==92)break;
    }
}