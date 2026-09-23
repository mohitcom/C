#include<stdio.h>
int main(){
 int num, i;
 // Ask the user for the number
 printf("Please Enter Number : ");
 scanf("%d",&num);
 
 // Print The multiplication Table
 printf("Multiplication Table For %d : \n",num);
 for(i=1; i<=10;i++){
 printf("%d * %d = %d\n",num,i,num*i);
 }
 return 0;
}