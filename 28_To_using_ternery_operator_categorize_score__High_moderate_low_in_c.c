#include<stdio.h>
int main(){
  int score,high,moderate,low;
  printf("\nPlease Enter a Score (0-100) = ");
  scanf("%d",&score);
 const char* Categorize =(score >= 80)?"High" :(score>= 50) ? "Moderate" :"Low";
 printf("Your Score is Categorized as : %s\n",Categorize);
 return 0;
}