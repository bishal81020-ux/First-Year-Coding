//This is program is for Function.
#include<stdio.h>

void printnamaste();

void printkonichiwa();

int main(){
  printf("Where are you from ?\n");
  printf("Enter I for India and J for japanese:");
  
  char ch;
  scanf(" %c",&ch);
  
  if(ch=='I'||ch=='i'){
    printnamaste();
 }
 
  else if(ch=='J'||ch=='j'){
    printkonichiwa();
 } 
 
  else{
      printf("Invalid!!");
 }
 
return 0;
}

void printnamaste(){
printf("Namste Kaise hai aap");
}

void printkonichiwa(){
printf("Konichwa");
}
