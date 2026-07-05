//This program is to prove that calloc clears the memory by printing it before you even touch.
#include<stdio.h>
#include<stdlib.h>

int main(){
  
  printf("Enter your no. ");
  int n; 
  scanf("%d",&n);
  
  int *ptr = (int *)calloc(n,sizeof (int));
  
   for(int i=0;i<0;i++){
     printf("number %d= %d\n",i+1,ptr[i]);
   }
  
  return 0;
  
}
