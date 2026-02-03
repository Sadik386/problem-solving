#include <stdio.h>
int main(){
    float a,r,d;
    printf("total units:");
    scanf("%f",&a);
    if(a<=100)
    {
    r=(a*5)+150;

    printf("%.2f your bill:",r);
    }
else if(a<=300){
    r=100*5+7*(a-100)+150;
    printf("%.2f your bill:",r);
    }
    else if(a<=500){
    r=5*100+200*7+9*(a-300)+150;
     printf("%.2f your bill:",r);
    }
    else
    {
        r=5*100+200*7+9*200+150+12*(a-500);
        if(r>10000){
        d=r-(r-150)*0.05;
            printf("%.2f your bill:",d);

        }
        else{
            printf("%.2f your bill:",r);
        }


    }
}
