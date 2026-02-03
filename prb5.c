#include<stdio.h>
int main(){
    int age ,income;
    scanf("%d",&income);
    scanf("%d",&age);
   
    if (income >=50000)
    {
        if (age > 18)
        {
            printf("you are eleigible for loan");
        }
        else{
            printf("you are not eligible for loan");
        }
        
    }
    else
    {
      printf("you are not eligible for loan");
    }
    
    
}