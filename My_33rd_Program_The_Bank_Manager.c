//This is a an bank account anazlyer and transition portal.
 
#include<stdio.h>
#include<string.h>

void inputPassword(int *pass);
int checkPass(int given);

struct Account{
    long long acc_no;
    char name[100];
    float balance;
  };
  
int main(){
  float deposit;
  float withdraw;
  int codex;
  int realcode;
  int secretx=0;
   char option;
   int result;

  
 struct Account A1[1];
  printf("Enter Your Account no(11digits):  ");
  scanf("%lld",&A1[0].acc_no);
  printf("\nYour account no: %lld",A1[0].acc_no);
  printf("\nEnter Your Name : ");
  scanf("%s",A1[0].name);
  printf("Enter your 4 digit password  (Only once):");
  scanf("%d",&codex);
  
  int j=0;
  while(j<2){ 
    if(codex<1000||codex>9999){
    
      printf("Plese enter only 4 digit password :");
      scanf("%d",&codex);
    }
  else{
      printf("Password Accepted");
      break;
    }
    j++;
    }
  if(j==2&&codex<1000||codex>9999){
  printf("Too many invaild attempts \n Ples try again after 24hr or Visit Branch");
  return 0;
  }
  
  printf("\nDeposit only 2000 as base salary one time : ");
  scanf("%f",&A1[0].balance); 
  printf("Your Details :\n\nAcc no.%lld \nName: %s\n\n Balance: %.2f",A1[0].acc_no,A1[0].name,A1[0].balance);
  //Struct Ends
  printf("\n\nHyy welcome to Stars Bank :)\n");
  for(int i=0; ;i++){
      
    printf("Plese choose from the given options\n");
    printf(" a) Deposit\n b)Withdraw \n c) Check Balance \n d)Exit\n....");
    
  
  scanf(" %c",&option);
  
  if(option=='a'||option=='A'){//Option A start
   
    printf("Enter your Amount:");
    scanf("%f",&deposit);
    
    
    result = checkPass(codex);
    if(result==1){
        A1[0].balance+=deposit;
    }
  }//A ends
  else if(option=='b'||option=='B'){//B starts
    
      printf("Enter your Amount: ");
      scanf("%f",&withdraw);
      
     
      result = checkPass(codex);
      if(result==1){
          A1[0].balance-=withdraw;
         
      }
  }// B ends
  else if(option=='c'||option=='C'){//C starts
    
      
      result = checkPass(codex);
      if(result==1){
          printf("\n\nYour Bank Balance=%.f\n",A1[0].balance);
          
      }
  }//C ends
  else{
    
      printf("\n\n\nThanks for using our service \nPlese Visit again");
      break;
  }
  }
  
    
    
    
    
  return 0;
}

void inputPassword(int *pass){
  printf("Enter Your Password\n");
  scanf("%d",pass);
  
}

int checkPass(int given){
    int taken;
  for(int i=2;i>0;--i){
      inputPassword (&taken);
      if(given==taken){
        printf("Transition completed\n");
        return 1;
     }
    else{
    if(i>0){
        
        printf("\nAccess Denied \n %i Attempts left\n Enter your password again!!\n",i);
        }
    }
  }
  
  printf("\nYour Bank account is locked for 24hr Please contact Branch for queries...\n\n ");
  return 0;
}
