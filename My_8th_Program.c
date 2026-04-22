//This program is to check the if the num is even or odd
#include<stdio.h>
int main(){
  int num;
  printf("This is to check the number is even or odd\n");
  printf("Enter your number :\n");
  scanf("%d",&num);
  printf("Is the num odd or even?\n");
  printf("Yes(1),no(0)=%d",num%2==0);
  return 0;
}
