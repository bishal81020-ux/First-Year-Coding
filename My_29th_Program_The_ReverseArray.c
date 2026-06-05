//This program is to reverse the values of arrays .

#include<stdio.h>

void reverseArray(int _arr[ ],int size);

void printrevarray(int _arr[ ],int size);

void printArray(int _arr[ ],int size);

int main(){
  
 int arr[7]={1,2,3,4,5,6,7};
 
 printArray(arr,7); 
printf("\n");

reverseArray(arr,7); 

printrevarray(arr,7);

  return 0;
}

void reverseArray(int _arr[ ],int size){
  
  for(int i=0;i<size/2;i++){
    
    int temp =_arr[i];
    _arr[i]=_arr[size-i-1];
    _arr[size-i-1]=temp;
    
  }
}

void printrevarray(int _arr[ ],int size){
  
  for (int i=0;i<size;i++){
    
    printf("%d\t",_arr[i]);
  }
}

void printArray(int _arr[ ],int size){
  
    for(int i=0;i<size;i++){
        printf("%d\t",_arr[i]);
        
    }
}
  
    
    
    



