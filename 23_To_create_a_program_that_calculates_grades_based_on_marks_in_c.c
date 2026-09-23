#include<stdio.h>
int main(){
  int marks;
  printf("Welcome to Grades Calculator :- \nPlease Enter your Marks =\n");
  scanf("%d",&marks);
  if (marks>90)
  {
    printf("Your Grades Is A");
  } else if (marks>75){
    printf("Your Grades Is B");
  }else if (marks>60)
  {
     printf("Your Grades Is C");
  }else if (marks>30)
  {
     printf("Your Grades Is D");
  }else {
    printf("Your Grades Is F"); 
}
printf("\nThaking You");
  return 0;
}