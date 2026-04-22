// This program is to check the users spend ,study and fitness
#include<stdio.h>
int main(){
 char initial;
 float pocket_money,spends;
 int day,hours;
 printf("Please enter your first initial:\n");
 scanf(" %c",&initial);
 printf("Hello %c\n",initial);
 printf("What's your weekly pocket money:\n");
 scanf("%f",&pocket_money);
 printf("How much money you spend on food weekly\n");
 scanf("%f",&spends);
 printf("Please enter your average weekly gaming hours:\n");
 scanf("%d",&hours);
 printf("How mang days you weekly go to gym?\n");
 scanf("%d",&day);
 printf("Your remaning balance at the end of week is:₹%.2f \n",pocket_money-spends);
 printf("Now you will know you are doing good or not.\n");
 printf("If the you are doing good then result will sho2 1 and if not then 0\n");
 printf("Are you healthy and good at fitness:%d\n",day>=4);
 printf("Are you serious about your carrer:%d\n",hours<=10);
 printf("Is your week perfect%d\n",day>=5 && hours<=10);
 printf("Do you have to be more constient %d\n"(pocket_money-spends)<=0||hours>=10);
return 0; 
}
