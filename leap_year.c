#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a%100==0){
        if (a%400==0)
        {
            printf("leap year %d",a);
        }
        else{
            printf("not leap year");
        }}

    else if (a%4==0)
    {
        printf("%d leap year",a);
    }
    else
    {
        printf("not leap year");

    }

    
    
        


        

    }