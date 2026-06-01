//This program is to print the numbers from 1 to 20 except multiple of 3.
#include<stdio.h>
int main(){
  for(int i=1;i<=20;i++){
    if(i%3==0){
    continue;
  }
  printf("%d\n",i);
 }
  return 0;
}
