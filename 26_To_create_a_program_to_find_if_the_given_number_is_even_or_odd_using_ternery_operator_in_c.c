#include<stdio.h>
int main(){
  int number;
  printf("Please Enter Number = ");
  scanf("%d",&number);
  number =(number%2 ==0)? 
  printf("The Number %d is Entered Even.",number) 
   : printf("The Number %d is Entered Odd.",number);

   /* Alternate :-
   printf("%d is %s.\n",number,(number % 2 ==0)?"Even" : "Odd");
   */
   return 0;
}