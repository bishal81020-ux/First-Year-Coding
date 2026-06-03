//This program is to swap numbers with the help of pointers.
#include<stdio.h>

void swapnum(int *a, int *b);//For swapping * is must for thr address

int main(){
  int x=10,y=20;
  printf("value of x and y before swapping is %d,%d respectively\n ",x,y);
  swapnum(&x,&y);//recall the function
  

  
  return 0;
}

 void swapnum(int *a,int *b){//define
   
   int temp= *a;
    *a=*b;
    *b=temp;
      //print the result 
    printf("Value of x and y after swapping is %d,%d respectively",*a,*b);
    
    
    
 }