#include <stdio.h>

int main() {
    int adminpass = 1234,adminotp=4567,userpass = 4321;
    int otp,pass,input,c,id;
    int  adminid=12,userid=101;

    start:
printf("1.user\n2.admin\n3.end \n");
scanf("%d",&input);
switch (input)
{
case 1:
a: 
     printf("user panel\n1.enter your user id\n");
  scanf("%d",&id);
  printf("enter your pass \n");
  scanf("%d",&pass);
  if (pass == userpass && id == userid)
  {
    printf("successfully login as a user-%d\n",userid);
    goto start;
  }
  else
  {
    printf("wrong credential\n");
    goto a;
  }

  
  
    break;
case 2:
b:  
     printf("user panel\n1.enter your admin id\n");
  scanf("%d",&id);
  printf("enter your pass \n");
  scanf("%d",&pass);
  if (pass == adminpass && id == adminid)
  {
    printf("enter otp\n");
    scanf("%d",&otp);
    if (otp == adminotp )
    {
        printf("succesfully login as admin user-%d\n",userid);
        goto start;

    }
    else
    {
        printf("wrong otp \n");
        goto b;
    }
    
    
  }
  else
  {
    printf("wrong credential\n");
    goto b;
  }
  

  
    break;
    case 3:
    return 0;
default:
printf("invalid choice\n");
    break;
}
  
  
  
    

    return 0;
}