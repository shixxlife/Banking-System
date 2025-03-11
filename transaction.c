#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "structure_acc.h"
void transaction(struct account *a,int n)
{
    int num,date,m,amount;
    char ch1,ch2;
    printf("\nEnter your account number (example: 1000, 1001,1002,1003.....)....");
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
            for(int j=0;j<31;j++)  //performing transactions for one month in that account
            {
                printf("\nEnter the date of the transaction..");
                scanf("%d",&date);
                if(date>31)
                {
                    printf("\nPlease enter any number from 1 to 31..");
                    scanf("%d",&date);
                }
                printf("\nEnter 1 for deposit \n2 for withdrawal..");
                scanf("%d",&m);
                printf("\nEnter amount..");
                scanf("%d",&amount);                
                printf("\nCurrent balance");
                if(m==1)
                {
                    a[i].balance+=amount;
                    for(int k=date;k<31;k++)
                        a[i].month[k]=a[i].balance;
                    printf("\n%d",a[i].balance);
                }
                else
                {
                    if(amount>a[i].balance)
                    {
                        printf("\nInsufficent balance \nBalance is %d",a[i].balance);
                        printf("\nEnter amount within the balance...");
                        scanf("%d",&amount);
                    }
                    a[i].balance-=amount;
                    for(int k=date;k<31;k++)
                        a[i].month[k]=a[i].balance;
                    printf("\n%d",a[i].balance);
                }
                printf("\nDo u want to continue transactions for this account?\nEnter 'Y' for yes or 'N' for no..");
                scanf(" %c",&ch1);
                fflush(stdin);
                if(ch1=='Y')
                    continue;
                else
                    break;
            }           
            
        }
    }

    printf("Do u want to continue transactions for other accounts? \nEnter 'Y' for yes or 'N' for no..");
    scanf(" %c",&ch2);
    fflush(stdin);
    if(ch2=='Y')
    {
        transaction(a,n);
    }
    else if(ch2=='N');
    {
        return;
    }  


}