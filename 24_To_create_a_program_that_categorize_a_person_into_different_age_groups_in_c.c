#include<stdio.h>
int main(){
  int age;
  printf("Welcome To age Categorize :-\n\nPlease Enter Your age = ");
  scanf("%d",&age);
  if (age>60)
  {
    printf("Your are a Senior.");

  }else if (age>20)
  {
    printf("You are an Adult.");
  }else if (age>13)
  {
    printf("You are a Teen.");
  }else{
    printf("You are a Child.");
  }
  return 0;
}