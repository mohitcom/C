#include<stdio.h>
int main(){
  int month;
  printf("\nWelcome To Month Calculator :-\nPlease Enter Number(1-12) : ");
  scanf("%d",&month);

  switch (month)
  {
  case 1: printf("The Month is January");
  break;
  case 2: printf("The Month is February");
  break;
  case 3: printf("The Month is March");
  break;
  case 4: printf("The Month is April");
  break;
  case 5: printf("The Month is May");
  break;
  case 6: printf("The Month is June");
  break;
  case 7: printf("The Month is July");
  break;
  case 8: printf("The Month is August");
  break;
  case 9: printf("The Month is September");
  break;
  case 10: printf("The Month is October");
  break;
  case 11: printf("The Month is November");
  break;
  case 12: printf("The Month is December");
  break;
  default :printf("The Numbers is not a Month");
  break;
  }
  printf("\nThe Month Calculation is Completed.");
  return 0;
}