#include<stdio.h>
int main(){
  int year;
  printf("Please Enter a Year = ");
  scanf("%d",&year);
  if ((year % 4 ==0 || year % 100 == 0) && ( year % 400 == 0)){
      printf("\nThe %d is a Leap Year.",year);
  }else
  {
    printf("\nThe %d is not a Leap year.",year);
  }
  return 0;
}