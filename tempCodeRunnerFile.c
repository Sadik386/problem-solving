#include<stdio.h>
int main ()
{
int n;
scanf ("%d",&n);
for (int i = 0; i < n; i++)
{
    for (int j = i; j < n-1; j++)
    {
        printf(" ");
    }
     for (int k =0; k <= i  ; k++)

     {  if (i >=2 && k >=1 && i !=k )
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







