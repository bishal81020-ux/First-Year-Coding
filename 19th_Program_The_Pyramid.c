//The star pyramid using nested loops.
#include<stdio.h>
int main(){
  printf("This program is to make Star pyramid * \n");
  printf("Enter how big pyramid you want :");
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
    printf("*",i);
  }
  printf("\n");
}
printf("Thank You");
  
  return 0;
}
