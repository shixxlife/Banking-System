#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "structure_acc.h"
void balance_check(struct account *a,int n)
{
    int num,ch;
    printf("\nEnter account number..");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(a[i].acc_id==num)
        {
            printf("\nThe balance for the given account is %d",a[i].balance);
        }
    }
    printf("\nDo u want to check balance for other accounts? \nEnter 'Y' for yes or 'N' for no..");
    scanf(" %c",&ch);
    fflush(stdin);
    if(ch=='Y')
    {
        balance_check(a,n);
    }
    else if(ch=='N');
    {
        return;
    }  
    
}