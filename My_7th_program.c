//To Check the given charcter is digit or not
#include<stdio.h>
int main(){
  char alphabet;
  printf("This program is to check if the given charcter is digit ot not..\n");
  printf("Enter you charcter :\n");
  scanf("%c",&alphabet); 
  //I have to study this  0 , 9 about ASCII
  printf("Is your charchter is digit ? (yes[1]/no[0]:%d\n",alphabet>='0'&&alphabet<='9');
return 0;   
}
