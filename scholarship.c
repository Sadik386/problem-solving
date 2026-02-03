#include <stdio.h>

int main() {
    float ssc,hsc,dept,familyincome,totscore;
    scanf("%f%f",&ssc,&hsc);
    totscore = ssc*40 + hsc*50;
    if (totscore >= 320 )
    {
        if (totscore >=320 && totscore <340) 
        {
            printf("civil\n");
        }
    else if (totscore >= 340 && totscore <360)
    {
        printf("EEE\n");
    }
    else if (totscore >= 360)
    {
        printf("CSE\n"); 
    
    
        
    }}
    else
    {
        printf("not eligible\n");
    }
    printf("Total Score: %.2f\n",totscore);
    printf("Scholarship Amount will be: ");
   scanf("%f",&familyincome);
  if (ssc + hsc > 4.5)
  {
    /* code */
    if (familyincome < 20000)
    {
      printf("50% scholarship\n");
    }
    else if (familyincome >= 20000 && familyincome <=40000){
     printf("25%% scholarship\n");    
    }
    else{
     printf("No scholarship\n");}
    
     
  }
    
    
    
    return 0;
}