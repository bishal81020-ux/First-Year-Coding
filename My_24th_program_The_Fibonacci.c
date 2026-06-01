//The Fibonacci Sequence.
#include<stdio.h>

int fibonacciofn(int n);

int main(){
  printf("This program is to calculate the value of postion of fibonacci.\n");
  
  int n;
  
  printf("Enter your no:");
  scanf("%d",&n);
  //call the function.
  printf("The value of the fibonacci %d is %d\n",n,fibonacciofn(n));
  
  return 0;  
}

int fibonacciofn(int n){
  if(n==0){
    return 0;
}

  if(n==1){
    return 1;
  }
  
  return fibonacciofn(n-1)+fibonacciofn(n-2);
}
