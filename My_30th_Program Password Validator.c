//This program is to ensure your password is strong or weak.
#include<stdio.h>
#include<string.h>

void inputPassword(char _password[ ]);

int main(){
  
  char password[50];
   
   printf("Enter your Password");
  inputPassword(password);
  int n=strlen(password);//Strlen count no. of char excludinh \0.

     while(n<8){//ask until user input 8 charcters
      printf("Password must be atleast 8 charcters.\nEnter your password:");
      inputPassword(password);
      n=strlen(password);
      }
      
     printf("Password accepted !!");
      
  
   return 0;
}
void inputPassword(char _password[ ]){
  printf("\n");
  
  scanf("%s",_password);
  
  }
