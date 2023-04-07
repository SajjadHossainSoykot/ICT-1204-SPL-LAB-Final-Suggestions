#include<stdio.h>
int main (){
  int a, c, i, sum = 0, count = 0;
  float avg;
  printf("Enter total numbers: ");
  scanf("%d", &c);
  for(i=1; i<=c; i++){
        printf("Enter number%d: ", i);
        scanf("%d",&a);
        sum = sum + a;
        count = count + 1;
    }
    avg = (sum*1.0/count*1.0);
    printf("The average is %f", avg);
    return 0;
}
