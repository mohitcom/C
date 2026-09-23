#include<stdio.h>
int main(){
  int number;
  printf("Welcome To Odd & Even Finder :- \n\nPlease Enter Number = ");
  scanf("%d",&number);

  if (number%2 ==0)
  {
    printf("\nYou Have Entered Even Number = %d",number);
  }
  else{
    printf("\nYou Have Entered Odd Number = %d",number);
  }
  printf("\nThanking You");
  return 0;
}