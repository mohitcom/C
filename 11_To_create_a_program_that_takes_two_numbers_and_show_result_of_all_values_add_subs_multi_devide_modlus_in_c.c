#include<stdio.h>
int main(){
  int a,b,add,sub,multi,devide,mod;
  printf("\nEnter First Number: ");
  scanf("%d",&a);
  printf("\nEnter Second Number: ");
  scanf("%d",&b);
  add=a+b;
  printf("\nThe Addition is %d",add);
  sub=a-b;
  printf("\nThe Substraction is %d",sub);
  multi=a*b;
  printf("\nThe Multiplication is %d",multi);
  devide=a/b;
  printf("\nThe Devision is %d",devide);
  mod=a%b;
  printf("\nThe Modlus is %d",mod);
  return 0;
}