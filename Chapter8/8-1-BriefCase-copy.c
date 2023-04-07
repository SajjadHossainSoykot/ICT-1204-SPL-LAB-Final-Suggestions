#include <stdio.h>
#include <stdlib.h>
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
    for(int i=0; i<n-1; ++i){
        for (int j = 0; j<n-1; ++j){
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] =arr[j+1];
                arr[j+1] = temp;
            }
        } 
    }
    if (n % 2 == 0) {
        median = (arr[(n-1)/2] + arr[n/2])/2.0;
    } else {
        median = arr[n/2];
    }
    printf("The median of the list is: %.1f", median);
    return 0;
}
