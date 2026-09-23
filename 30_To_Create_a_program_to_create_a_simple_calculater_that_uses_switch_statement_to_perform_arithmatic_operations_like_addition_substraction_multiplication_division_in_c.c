#include<stdio.h>
int main(){
  char operator;
  double first,second;
  printf("\nEnter An Operator (+,-,*,/) : ");
  scanf("%c",&operator);
  printf("\nPlease Enter two Operands : ");
  scanf("%lf %lf",&first, &second);
  switch (operator)
  {
  case '+': 
     printf("%.2lf +%.2lf = %.2lf\n",first,second,first+second);
    break;
   case '-': 
     printf("%.2lf - %.2lf = %.2lf\n",first,second,first-second);
    break;
     case '*': 
     printf("%.2lf * %.2lf = %.2lf\n",first,second,first*second);
    break;
    case '/' :
  // Check For division by Zero...
   if (second != 0.0)
   {
     printf("%.2lf / %.2lf = %.2lf\n",first,second,first/second);
   } else {
    printf("Error : Division by Zero not Allowed.\n");
   }
   break;

  default : printf("Error : Invalid Operator.\n");
   break;
  }
  return 0; 
}