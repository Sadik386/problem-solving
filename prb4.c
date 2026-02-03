#include<stdio.h>
int main(){
    char operator;
    float num1,num2,result;
    scanf("%c",&operator);
    scanf("%f",&num1);
    scanf("%f",&num2);

    

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%.2f",result);
        break;
     case '-':
        result = num1 - num2;
        printf("%.2f",result);
        break;
     case '*':
        result = num1 * num2;
        printf("%.2f",result);
        break;
     case '/':
     if (num2 == 0)
     {
        printf("math error");
     }
     else{
        result = num1 / num2;
        printf("%.2f",result);
        break;
     }
    

    
    default:
    printf("invalid ");
        break;
        
    }
    
}