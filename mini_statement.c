#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "structure_acc.h"
void mini_statement(struct account *a,int n)
{
    int num,date,m,amount;
    int dates[5];
    int amount_in[5];
    char operation[5][20];
    printf("\nEnter your account number (example: 1000, 1001,1002,1003.....)..");
    scanf("%d",&num);
    if(num<1000)
    {
        printf("invalid account number. enter greater than 1000...");
        scanf("%d",&num);
    }
    for(int i=0;i<n;i++)   //n is total number of accounts
    {
        if(a[i].acc_id==num)  //finding the particular account number
        {
            for(int j=0;j<5;j++)  //performing transactions for one month in that account
            {
                printf("\nEnter the date of the transaction..");
                scanf("%d",&date);
                if(date>31)
                {
                    printf("\nPlease enter any number from 1 to 31..");
                    scanf("%d",&date);
                }
                dates[j]=date;
                printf("\nEnter 1 for deposit \n2 for withdrawal..");
                scanf("%d",&m);
                printf("\nEnter amount..");
                scanf("%d",&amount);
                amount_in[j]=amount;
                printf("\nCurrent balance");
                if(m==1)
                {
                    strcpy(operation[j],"Depsit");
                    a[i].balance+=amount;
                    for(int k=date;k<31;k++)
                        a[i].month[k]=a[i].balance;
                    printf("\n%d",a[i].balance);
                }
                else
                {
                    strcpy(operation[j],"Withdrawal");
                    a[i].balance-=amount;
                    for(int k=date;k<31;k++)
                        a[i].month[k]=a[i].balance;
                    printf("\n%d",a[i].balance);
                }
                
            }
            printf("\nSummary");
            for(int k=0;k<5;k++)
            {
                printf("\nDate: %d",dates[k]);
                printf("\nOperation: %s",operation[k]);
                printf("\nAmount: %d",amount_in[k]);
                printf("\n");
            }            
        }

    }

}