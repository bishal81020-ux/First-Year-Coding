//This program is used to approve loans of user.
#include<stdio.h>
int main(){
  int age;
  float income;
  char loan;
  printf("Enter Your age : \n");
  scanf("%d",&age);
  if (age<18 || age>=100){
  printf("Rejected You must be at least 18\n");
}
else{
  printf("Enter your monthly income : ₹\n");
  scanf("%f",&income);
  if(income<25000){
    printf("Income does not meet the minımum requirement\n");
  }
  else{
  printf("Do you have any unpaid laons ?\nYes or no =\n ");  
  scanf(" %c",&loan);
  if(loan=='Y'){
    printf("Rejected: You must pay off your existing loan first.\n");
  }
  else{
    printf("Congratulations \nAPPROVED: Your loan is granted!");
  }
 }
}
  return 0;
}
