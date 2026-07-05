//This program is to create dynamic memory of 3 digits and then exapand it to 5 digits without loosing thr orginal data.
#include<stdio.h>
#include<stdlib.h>

int main(){
  
  int *ptr=(int *)calloc(3,sizeof(int));
  
  for(int i=0;i<3;i++){
    printf("Enter %d no. ",i+1);
    scanf("%d",&ptr[i]);  
  }
  printf("\nFirst segment Complete 2nd segment starts:\n\n\n\n");
  ptr=(int *)realloc(ptr,5*sizeof(int));
  
  for (int j=3;j<5;j++){
    printf("Enter %d no.",j+1);
    scanf("%d",&ptr[j]);
  }
  for(int k=0;k<5;k++){
      printf("%d number is %d\n",k+1,ptr[k]);
  }
  free(ptr);
  
  return 0;
}
