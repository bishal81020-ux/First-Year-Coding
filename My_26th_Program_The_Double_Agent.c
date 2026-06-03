//This program is to use pointer to pointer funtion .
#include<stdio.h>

 void ppoint(int *a);
 
int main(){
  
  int price= 100;
  ppoint(&price);
  
  
  return 0;
}
void ppoint(int *a){
  
int *ptr=a;
int **pptr=&ptr;
printf("Value of a is %d and value of pointer is %d",*a,**pptr);
}


