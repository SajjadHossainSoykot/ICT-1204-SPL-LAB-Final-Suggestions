#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, D;
    printf("Enter a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);
    D = b*b-4*a*c;
    if(a==0 && b==0)printf("No Solution");
    else if(a==0)printf("Only One Solution: x= %f", -(c/b));
    else if(D<0)printf("No Real Root");
    else
    {
        float x1, x2;
        x1 = -b + sqrt(D)/2*a;
        x2 = -b - sqrt(D)/2*a;
        printf("x1 = %f\nx2 = %f", x1,x2);
    }
}