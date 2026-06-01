//This program is to check if the numbers entered by user is even or odd.
#include<stdio.h>
int main(){
  printf("This is program is to check if the number you enter is even or odd.\n");
  int n;
  while(n%2==0){
    printf("Enter your no:");
    scanf("%d",&n);
    if(n%2!=0){
      printf("Acces Denied : Odd number detected!\n");
      break;
    }
    else{
      printf("Good job,\n");
    }
  }
  return 0;
}
