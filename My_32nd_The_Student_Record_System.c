//This program is to make student record of college.

#include<stdio.h>
#include<string.h>

int main(){
  struct Student{//Declaration
    char name[100];
    int roll_no;
    float CGPA;
  }; //semicolon is must at the end of structure.
  int n;
  printf("How many students are there to be written on record?\n=");
  scanf("%d",&n);
  struct Student S1[n];//recall
  //Input the Data 
 for(int i=0;i<n;i++){
   
   printf("\nEnter Details of %d student\n",i+1);
   printf("\nEnter Name:");
   scanf("%s",S1[i].name);
   printf("\nEnter roll no.");
   scanf("%d",&S1[i].roll_no);
   printf("\nEnter CGPA:");
   scanf("%f",&S1[i].CGPA);
 
 }
  //output 
  for(int j=0;j<n;j++){
    printf("\nName of Student : %s",S1[j].name);
    printf("\nRoll no. %d",S1[j].roll_no);
    printf("\n CGPA: %.2f",S1[j].CGPA);
  }
  
  
  return 0;
}
