#include<stdio.h>
int main(){
  // Define integer value
  int ivalue;
  printf("Enter an Integer value = ");
  scanf("%d",&ivalue);
  // convert to a floating using type casting
  float fvalue=(float)ivalue;
  // print both values
  printf("integer value is %d and floating point value is %f",ivalue,fvalue);
  return 0;
}