#include<stdio.h>
int main(){
  int num1,num2,num3;
  printf("Welcome To Greatest Number Finder :-\n\nEnter First Number = ");
  scanf("%d",&num1);
  printf("\nEnter Second Number = ");
  scanf("%d",&num2);
  printf("\nEnter Third Number = ");
  scanf("%d",&num3);
  if ((num1>num2) &&(num1>num3)){
   printf("\nThe First Number is Entered Greatest = %d",num1);
  } else if((num2>num1) &&(num2>num3)){
    printf("\nThe Second Number Is Entered Greatest = %d",num2);
  }else{
    printf("\nThe Third Number Is Entered Greatest = %d",num3);
  }
  printf("\nThanking You");
  return 0;
  
}