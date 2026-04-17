//BMI calculator
#include<stdio.h>
int main(){
  float height,mass;
  char name;
  printf("Heyy Thanks for coming to my website \n");
  printf("Whats your namel?\n") ;
  //Type only 1st letter of your name
  scanf(" %c", &name);
  printf("Hello %c \n",name);
  printf("Please enter your height in m\n ");
  scanf("%f", &height);
  printf("Please enter your mass  ");
  scanf("%f", &mass);
  //Here %.2f will remove extra decimals and show ony two digits after decimal.
  printf("Your BMI is %.2f",mass/(height*height));
  return 0;
}
