#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int array[MAX_SIZE], n, i;
    int *p; // pointer to an integer

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    p = &array[0];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", p);
        p++;
    }
    p = &array[n-1]; // point the pointer to the last element of the array
    printf("Elements of the array in reverse order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *p);
        p--; // move the pointer to the previous element
    }
    printf("\n");
    return 0;
}
