#include<stdio.h>
int main(){
  float p,t,r,interest;
  printf("\nEnter intersest value of P =");
  scanf("%f",&p);
   printf("\nEnter intersest value of T =");
  scanf("%f",&t);
   printf("\nEnter intersest value of R =");
  scanf("%f",&r);
  interest=(p*t*r)/100;
  printf("\nThe Simple Interest is %f",interest);
  return 0;
  
}