//library
#include<string.h>
#include<stdio.h>

typedef struct Book{

    char title[100];
    char author[100];
    float price;
    int isAvailable;
    
  }B;
  
  void printInfo(B Book);
  
int main(){
  
  char name[100];
  char input[100];
  
  printf("Enter your first name: ");
  scanf("%s",name);
  
  printf("\nHyy %s.... \nThanks for coming to our library\n\n\n\n",name);
  B B1={"Let Us C","Yashvant Kantekar",350.00,1};
  B B2={"C Programming","Dennis Ritchie", 499.00,1};
  B B3={"Data Structures","Seymour Lepchutz",425.00,0};
  B B4={"Computer System","Andrew Tanenbaum",599.00,1};
  B B5={"Operating System","Galvin",549.00,0}; 
  
  printf("Books in library \n a)%s \n b)%s \n c)%s \n d)%s \n e)%s\n\n",B1.title,B2.title,B3.title,B4.title,B5.title); 
  
  printf("Enter the name of book you want: ");
  scanf(" %[^\n]",input);
  
  
  if((strcmp(B1.title,input)==0)){
    printInfo(B1);
  }
  else if ((strcmp(B2.title,input)==0)){
      printInfo(B2);
  }
  else if ((strcmp(B3.title,input)==0)){
      printInfo(B3);
  }
 else if ((strcmp(B4.title,input)==0)){
     printInfo(B4);
 }
 else if ((strcmp(B5.title,input)==0)){
     printInfo(B5);
 }
 else{
     printf("\nPlese Write the correct name of Book and try again....");
     }
 
  
  
  
  
  
  return 0;
}
void printInfo(B Book){
  printf("\n Title: %s \n Author : %s \n Price :%.2f \n Availbility : %s",Book.title,Book.author,Book.price,Book.isAvailable ?"Available" : "Not Available");




}
