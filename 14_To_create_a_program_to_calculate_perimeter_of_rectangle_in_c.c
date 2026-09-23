#include<stdio.h>
int main(){
  // Perimeter of a rectangle ABCD= A+B+C+D
  int a,b,c,d,perimeter;
  printf("\nThe value of a perimeter of a rectangle A =");
  scanf("%d",&a);
   printf("\nThe value of a perimeter of a rectangle B =");
  scanf("%d",&b);
   printf("\nThe value of a perimeter of a rectangle C =");
  scanf("%d",&c);
   printf("\nThe value of a perimeter of a rectangle D =");
  scanf("%d",&d);
  perimeter=a+b+c+d;
  printf("\nThe Perimeter of a rectangle ABCD = A+B+C+D");
   printf("\nThe Total value of a perimeter of a rectangle ABCD is %d",perimeter);
  return 0;
  
}