/* I'm big fan of gaming so, after few days I will buy a laptop 
For gaming and yes also for Study .
so this is code to check the minimum requirment of GTA VI*/
#include<stdio.h>
int main(){
 int gpu , ram; 
 printf("Heyy are you also a biggest fan of gaming like  me?\n");
 printf("Do you want to check if your PC is can run gta VI smothly or not?, then you are at the right place.\n");
 printf("Enter your GPU:\n"); 
 scanf("%d",&gpu);
 printf("Enter your RAM:\n");
 scanf("%d",&ram);
 printf("Is your PC meets minium requirment to play GTA VI \n Yes[1]/no[0]:%d",gpu>=4060&&ram>=12 );
   return 0;
}
