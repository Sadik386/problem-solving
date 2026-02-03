// #include <stdio.h>

// int main() {
//     int pass =12345,a,balance=10000,input,add_amount,withdraw_amount,note,remaining;
//     again:
//     printf("input pass \n");
//     scanf("%d",&a);
//     if (a == pass)
//     // while (1)
//     start :
//       printf("press number\n1.deposit \n2.withdraw\n3.balance inquiry \n 4.exit\n");
//      {
//         printf("enter your choice \n");
     
//         scanf("%d",&input);
//         switch (input)
//         {
//         case 1:
//     a:
//         printf("add money amount\n");
//             scanf("%d",&add_amount);
//            if (add_amount > 0)
//            {
//                balance=balance+add_amount;
//                printf(" current balance %d",balance);
//             /* code */
//            }
//         else{
//             printf("deposit cant be negetive");
//             goto a;
//         }
//             break;
//         case 2:
//         b:
//         printf("withdraw money\n");
//             scanf("%d",&withdraw_amount);
//             if (balance - withdraw_amount < 500 )
//             {
//                 printf("insufficient balance");
//                 goto b;
//             }
//             else if (withdraw_amount % 500 != 0 || withdraw_amount < 0 )
//             {
//                 printf("invalid amount");
//                 goto b;
//             }
//             else
//             {   
//                 note =withdraw_amount/500;
//                 remaining =  balance - withdraw_amount;
//                 printf("here your 500takas note %d \n",note );
//                 printf("your current balance is %d taka",remaining);

                
//             }
            
            
            
            

            
          
//             break;
//         case 3: 
//         printf("balance inquiry\n current balance is %d",balance);
//         break;
//         case 4:
//         return 0;
        

        
//         default:
//             break;
//         }

    
        
//         goto start;
//     }
//     else{
//         printf("incorrect pass");
//         goto again;
//     }
    

// }
#include <stdio.h>

int main() {
    int pass = 12345, a, balance = 10000, input;
    int add_amount, withdraw_amount, note, remaining;

again:
    printf("input pass \n");
    scanf("%d", &a);

    if (a == pass)
    {
start:
        printf("press number\n1.deposit \n2.withdraw\n3.balance inquiry \n4.exit\n");
        printf("enter your choice \n");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
a:
            printf("add money amount\n");
            scanf("%d", &add_amount);

            if (add_amount > 0)
            {
                balance = balance + add_amount;
                printf("current balance %d\n", balance);
            }
            else
            {
                printf("deposit cant be negative\n");
                goto a;
            }
            break;

        case 2:
b:
            printf("withdraw money\n");
            scanf("%d", &withdraw_amount);

            if (withdraw_amount <= 0)
            {
                printf("invalid amount\n");
                goto b;
            }
            else if (withdraw_amount % 500 != 0)
            {
                printf("amount must be multiple of 500\n");
                goto b;
            }
            else if (balance - withdraw_amount < 500)
            {
                printf("insufficient balance\n");
                goto b;
            }
            else
            {
                note = withdraw_amount / 500;
                balance = balance - withdraw_amount;
                printf("here your 500 taka notes %d\n", note);
                printf("your current balance is %d taka\n", balance);
            }
            break;

        case 3:
            printf("balance inquiry\ncurrent balance is %d\n", balance);
            break;

        case 4:
            return 0;

        default:
            printf("invalid choice\n");
        }

        goto start;
    }
    else
    {
        printf("incorrect pass\n");
        goto again;
    }
}
