//This program is to store weights of dumbells.

#include<stdio.h>

void TakeInput(int weights[ ],int _n);

void GiveOutput(int weights[ ],int _n);

int main(){
  
  printf("This program is to store the weights of your dumbells.\n");
  printf("How many weights you want to store :");
  printf("\n");
  int n;
  scanf("%d",&n); 
  int dumb[n];
  TakeInput(dumb,n);
  GiveOutput(dumb,n);
  
  
  
  return 0;
}

void TakeInput(int weights[ ],int _n){
  
  for(int i=0;i<_n;i++){
    
    printf("Enter your %d weight\n",i+1); 
    scanf("%d",&weights[i]);
  }
}

void GiveOutput(int weights[ ],int _n){
    printf("Your weights are: ");
  for(int i=0;i<_n;i++){
    printf("%d\t",weights[i]);
  }
}
