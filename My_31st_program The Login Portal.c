//This program is a login portal.
#include<stdio.h>
#include<string.h>
// I'll improve the nested if else in future to decrese the coding work
void inputcode(char secretx[ ]);

int main(){
  
  printf("Login Portal\n");
  char secret[20]="SMIT2026";
  
  char codex[20];
  printf("Please Enter your code:");
  inputcode(codex);
  
  
  
  if(strcmp(codex,secret)==0){
    printf("Access granted");
  }
 else{
     printf("Access Denied \n 2 Attempts Left!!\nEnter your code again");
     inputcode(codex);
     if(strcmp(codex,secret)==0){
       printf("Access Granted\n");
     }
     else{
         printf("Access Denied \n 1 more atempts left!!\nEnter your code again");
         inputcode(codex);
     if(strcmp(codex,secret)==0){
       printf("Access Granted\n");
     }
     else{
         printf("Access Denied Try again after 24hrs");
     }
     }
   
return 0;
}
}

void inputcode(char secretx[ ]){
  
  printf("\n");
  scanf("%s",secretx);
}
