//Calculate the power of a number without writing a loop.

#include<stdio.h>
#include<math.h>

double powofno(double x,double y);//Always use double instead of int and float.

int main(){
  printf("This program is to calculate the power of number.\n");
  
  double base,expo;
  
  printf("Enter the Base no:");
  scanf("%d",&base);
  printf("Enter the exponent:");
  scanf("%d",&expo);  
  
  printf("The result is: %.2f",powofno(base,expo));//Use %f
  return 0;
}

double powofno(double x,double y){
  return pow(x,y);
}
  
  
  
