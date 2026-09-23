#include<stdio.h>
int main(){
  int number;
  printf("Welcome to Number Finder :-\n\nEnter  Number = ");
  scanf(" %d",&number);
  if (number == 0)
  {
    printf("\nYou Have Entered Zero = %d",number);
  }
  
  else if (number>0)
  {
    printf("\nYou Have Entered Positive Numbers = %d",number);
  }
  else if (number<0){
   printf("\nYou Have Entered Negative Number = %d",number);
  }
  
  return 0;
}