#include<stdio.h>
#include<stdlib.h>
//This program is to allocate enough jersey no. of players given by user
int main(){
  int n;
  printf("Enter no. of players : "); 
  scanf("%d",&n);
  //malloc
  int *ptr;
  ptr=(int*)malloc(n*sizeof(int));
  for(int i=0; i<n;i++){
    printf("Enter Jersey no. for player %d :",i+1);
    scanf("%d",&ptr[i]);  
  }
  printf("\n\n");
  for(int j=0;j<n;j++){
    printf("Jersey no. of player %d : %d\n",j+1,ptr[j]);
    
  }
  
  free(ptr);
  
  return 0;
}
