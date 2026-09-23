#include<stdio.h>
int main(){
/*   Area of a Triangle = 1/2*B*H
     B = Base (any sides of the triangle)
     H = hight (the perpendicular line drawn from the base up to the opposite corner)
*/
float B,H,Triangle;
printf("\nEnter Base of a tringle =");
scanf("%f",&B);
printf("\nEnter Hight of a tringle =");
scanf("%f",&H);
Triangle=0.5*B*H;
printf("\nThe Area Of A Triangle is %f",Triangle);
return 0;
}