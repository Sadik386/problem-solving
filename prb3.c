#include<stdio.h>
int main(){
    int b;
    scanf("%d",&b);
  if(b%100 == 0){
     if (b % 400 == 0 && b % 4 == 0)
   {
    printf("leap year");

   }
   else{
    printf("not leap year");
   }
  }
  else if (b % 400 == 0 && b % 4 == 0)
  {
    printf("leap year");
  }
  
  
    
}