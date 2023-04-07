#include <stdio.h>
#include <stdlib.h>
int compare (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}
int main() {
    int n, i;
    float median;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the list: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    if (n % 2 == 0) {
        median = (arr[(n-1)/2] + arr[n/2])/2.0;
    } else {
        median = arr[n/2];
    }
    printf("The median of the list is: %.1f", median);
    return 0;
}
