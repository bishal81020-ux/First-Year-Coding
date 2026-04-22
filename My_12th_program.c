//This is a Discount Calculator
#include<stdio.h>
int main(){
float bill;
printf("Thanks For shopping \n");
printf("Please enter your total bill to get discount:₹\n");
scanf("%f",&bill);
 if(bill>=1000){
   printf("your total 10%% discount is :₹%.2f\n",bill*0.1);
   printf("Your final bill is %.2f",bill-bill*0.1);
 }
 else{
   printf("No discount is applicable, your final amount is :₹%.2f",bill);
 }
return 0;
}
