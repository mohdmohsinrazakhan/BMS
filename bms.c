#include <stdio.h>
#include <string.h>

char addaccount[11];
int deposit;
int withdraw;

int main()
{

    int number, balance = 0;
    int openAccount = 0;
    printf("\nbanking management system");
    printf("\n  menu  ");
    printf("\npress 1 for add account number");
    printf("\npress 2 fpr deposit money");
    printf("\npress 3 for withdraw money");
    printf("\npress 4 for check the balance");
    printf("\npress 5 for exit the account");

        do
    {

        printf("\nplease enter any number ");
        scanf("%d", &number);

        switch (number)
        {
        case 1:
            printf("please enter your 11 digit account number ");
            scanf("%s", &addaccount);

            while (strlen(addaccount) == 0 || strlen(addaccount) < 11 || strlen(addaccount) > 11)
            {
                printf("\nsorry! please enter valid 11 digit account number");
                printf("\nplease enter your account number");
                scanf("%s", addaccount);
            }
            openAccount = 1;
            printf("you have successfully create account");
            break;

        case 2:
            if (openAccount == 0)
            {
                printf("please create an  account before deposit");
            }
            else
            {
                while (deposit < 500 || deposit % 100 != 0)
                    ;
                printf("\nplease enter money in sequence.\nlike as 500,600,700...");
                printf("please enter your deposit amount");
                scanf("%f", &deposit);
                balance = balance + deposit;

                printf("\nyour amount has been deposited");
                printf("\nyour balance is:%f", balance);
            }
            break;
        case 3:
            if (openAccount == 0)
            {
                printf("sorry! please creat an account before withdraw money");
            }     
            else
            {

                printf("please enter your withdraw amount");
                scanf("%f",&withdraw);
                printf("your ammount has been debitid");

                if(withdraw>balance)
                printf("\nsorry! insufficient balance");
                else
                {
                    balance=balance-withdraw;

                }
        
            }
            break;

        case 4:
             if (openAccount==0)

             {
             printf("sorry!please creat an account before depositing money");
             }
             else
             {
              printf("your total balance is%f",balance);
             }
            break;


        

       case 5:
             printf("exit the program");   
             break;

             default:
             printf("invalid input. please try again");
             break;
        
        }            
        while(number!=5)
        
    return 0;
}
