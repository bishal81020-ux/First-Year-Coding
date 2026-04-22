//This is a simple calculator program.
#include<stdio.h>
int main(){
  char sign;
  float a,b;
  printf("Calulator\n"); 
  printf("Enter any of the char = + - * /\n");
  scanf(" %c",&sign);
  printf("Enter a:\n");
  scanf(" %f",&a);
  printf("Enter b:\n");
  scanf(" %f",&b);
  switch(sign){
    case '+' : printf("Additon of a and b is : %.2f\n",a+b);
    break;
    case '-'  : printf("Subtraction of a and b is : %.2f\n ",a-b);
    break;
    case '*' : printf("Multiplication of a and b is : %.2f\n",a*b);
    break;
    case '/' : printf("Division of a and b is : %.2f\n",a/b);
    break;
    default : printf("invalid");
  }
return 0;  
}
