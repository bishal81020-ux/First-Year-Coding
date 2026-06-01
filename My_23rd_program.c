//Calculate the factorial of a number

#include<stdio.h>

int factorial(int n);

int main(){
 printf("This program is to calculate the factorial of a no.\n");
 
int n; 
 printf("Enter your no:");
 scanf("%d",&n);
//call the function 
 printf("Factorial of %d is %d",n,factorial(n));
  
  return 0;
}

int factorial(int n){
  if(n==0){
    return 1;
  }
  
  int factnm1= factorial(n-1);
  int factn=factnm1*n;
  return factn;
}
  
