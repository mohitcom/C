#include<stdio.h>
#include<math.h>
int main(){
  float P,R,T,interest;
  // compound interest = P(1+R/100)t
  printf("\nEnter value of P =");
  scanf("%f",&P);
  printf("\nEnter value of R =");
  scanf("%f",&R);
  printf("\nEnter value of T =");
  scanf("%f",&T);
  interest = (P(1+R/100)T);
 printf("The Compound Interest is %f",interest);
 return 0;
}