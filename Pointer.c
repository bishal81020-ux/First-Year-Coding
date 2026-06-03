//This program is to update the value of pointers 
#include<stdio.h>

void overclock(int *gpuTemp, int *clockSpeed);

int main(){
  int Temp = 85, Clock=2200;//Given
  
  printf("Before Over clock:-\nTemp = %d \n Clock=%d\n",Temp,Clock);
  overclock(&Temp,&Clock);//Recall The function
  
  return 0;
}

void overclock(int *gpuTemp, int *clockSpeed){//Defining The Function.
 
*gpuTemp=*gpuTemp-10;
 *clockSpeed=*clockSpeed+500;
//Updation
printf("After Overclock :-\nTemp=%d\nClock=%d",*gpuTemp,*clockSpeed ); 
}
 
 
  
