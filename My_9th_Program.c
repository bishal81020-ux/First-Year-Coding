//This program is to convert indian ruppes into japanese yen.
#include<stdio.h>
int main(){
float money;
printf("This program is to convert Indian ruppes to japanese yen as per 18 April 2026\n");
printf("Enter INR: \n");
scanf("%f",&money);
printf("As per Japanese currency yen,\n The total value of amount given in yen(JPY) is :¥ %.2f\n",money*1.85);    
  return 0;
}
