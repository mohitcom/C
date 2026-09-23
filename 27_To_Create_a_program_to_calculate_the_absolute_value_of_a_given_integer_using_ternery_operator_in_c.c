#include<stdio.h>
int main(){
  int number,abs_var;
  printf("Please Enter Number = ");
  scanf("%d",&number);
  abs_var =(number<0)? -number : number;
  printf("The number %d is Entered of Absolute Value Is %d",number,abs_var);
  return 0;
}