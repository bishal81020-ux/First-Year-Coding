//This program is for ticket price distrubution.
#include<stdio.h>
int main(){
  int age;
  printf("Welcome,\nThanks for coming to our zoo.\n");
  printf("Please enter your age:\n ");
  scanf("%d",&age);
  if(age<=12){
    printf("Child Ticket price :₹150");
  }
  else if(12<age&&age<=59){
    printf("Adult ticket price : ₹250");
  }
  else if(100>age>=60){ 
    printf("Senior citizen ticket price is 100");
  }
  else{
    printf("invalid age");
  }
return 0;
}
