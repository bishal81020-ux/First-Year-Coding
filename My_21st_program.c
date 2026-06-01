//Convert barbell weights from Kilograms to Pounds so you know exactly you are lifting.

#include<stdio.h>

float mass_to_lbs(float mass);

int main(){
  printf("This program is to calculate how much weight you lift in gym from kg to pounds.\n");
  printf("Enter the barbell weight in Kg:");
  
  float mass;
  
  scanf("%f",&mass);
  
  printf("The weight you lifting is %.2f pounds.",mass_to_lbs(mass));
  
  return 0;
}

float mass_to_lbs(float mass){
    printf("The weight you lifting is ");
  return mass*2.20462;
}
