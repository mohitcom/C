#include<stdio.h>
int main(){
  int num1,num2,min;
  printf("\nEnter First Number = ");
  scanf("%d",&num1);
  printf("\nEnter Second Number = ");
  scanf("%d",&num2);
  min =(num1<num2)? num1:num2;
    printf("\nThe Minimum Number is %d.",min);
    return 0;
}