#include<stdio.h>
struct invent
{
    char *name[50];
    int num;
    float price;
};
int main()
{
    struct invent product[3], *ptr;
    printf("Input\n");
    for (ptr=product; ptr<product+3; ptr++ )
    {
        scanf("%s %d %f", ptr->name, &ptr->num,  &ptr->price);
    }
    printf("Output\n");
    ptr = product;
    for (ptr=product; ptr<product+3; ptr++ )
    {
        printf("%-20s %5d %10.2f\n", ptr->name, ptr->num,  ptr->price);
    }
    // while (ptr<product+3)
    //     {
    //     printf("%-20s %5d %10.2f\n", ptr->name, ptr->num, ptr->price);

    //     }
}