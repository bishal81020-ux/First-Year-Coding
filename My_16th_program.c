/*This program is to Print the complete multiplication table
 (from 1 to 10) for any number the user chooses.*/
#include<stdio.h>
int main(){
  printf("This programn is to find the tables from 1 to 10.\n");
  printf("Enter your number: ");
  int n;
  scanf("%d",&n);
  if(n>10){
    printf("Please enter your number between 1 to 10\n");
  }
  else{
    for(int i=1;i<=10;i++){
      printf("%d X %d = %d",n,i,i*n);
    }
  }
  return 0;
}
