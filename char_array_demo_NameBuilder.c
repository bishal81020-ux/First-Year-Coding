#include<stdio.h>

void askName(char name[ ],int length);//Don't forget use this [ ]

void printName(char name[ ],int length);

int main(){
  
  printf("How many charchters in your name :");
  int n;
  scanf("%d",&n);
  printf("\n");
 
  char name[n];
  
  askName(name,n);
  printName(name,n);
   
  return 0;
}

void askName(char name[ ],int length){
  
  printf("\n");
  //use ; this between the loop sepration .
  for(int i=0;i<length;i++){ //insted of i<=n type i<n cause numbering in c starts from 0
  printf("Enter your %d character:",i+1);//use i+1 for the user
    scanf(" %c",&name[i]);//don't forget the space
    printf("\n");
  }
}
void printName(char name[ ],int length){
  printf("Your name is : ");
  for(int i=0;i<length;i++){
    printf("%c",name[i]);
  }
}
