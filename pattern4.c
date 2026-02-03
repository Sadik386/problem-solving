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
     {
         printf(" *");
     }
    printf ("\n");  
}
for (int i = n; i > 0; i--)

{
    if (i == n)
    {
        continue;
    }
    
    for (int j = i ; j <= n; j++)
    {
        printf(" ");
    }
     for (int k =1; k <= i  ; k++)
     {
         printf("* ");

     }
    printf ("\n");
   
    

    
    
}
}







