#include <stdio.h>
int main (){
int unit,amount,first,second,total;
float dis_total;
scanf("%d",&unit);
if(unit<=100){
    amount = (unit * 5)+150;
printf("total %d taka",amount);
}
else if(unit>=100 && unit <= 300){
    first = (100 * 5)+150;
    second = (unit-100)*7;
    total = first + second;
printf("total %d taka",total);
}
else if(unit>=301 && unit <= 500){
    first = (100 * 5)+(300-100)*7 +150;
    second = (unit-300)*9;
    total = first + second;
printf("total %d taka",total);

}
else if(unit> 500){
    if (unit > 1000)
    {
        first=(100*5)+(300-100)*7+(500-300)*9+150;
        second=(unit-500)*12;
        total=first+second;
        dis_total=total - ((total-150)*5/100);
        printf("total%.2f taka",dis_total);
        

    }
    

else{

    first = (100 * 5)+(300-100)*7+(500-300)*9+150;
    second = (unit-500)*12;
    total = first + second;
printf("total %d taka",total);
}



}
}
