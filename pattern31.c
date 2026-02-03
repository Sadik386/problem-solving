#include<stdio.h>
int main ()
{
int n;
scanf ("%d",&n);
for (int i = n; i > 0; i--)
{
    for (int j = i ; j < n; j++)
    {
        printf(" ");
    }
     for (int k =1; k <= i  ; k++)
     {
        
        if (i >2 && k > 1 && i !=k )
     {
        printf("  ");
     }
     
       else{
         printf("* ");
       }

     }
    printf ("\n");
   
    

    
    
}
}







