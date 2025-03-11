#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "structure_acc.h"
extern void create_account(struct account *a,int n);
extern void transaction(struct account *a,int n);
extern void balance_check(struct account *a,int n);
extern void interest_calculation(struct account *a,int n);
extern void mini_statement(struct account *a,int n);
int main()
{
    int n,m;
    printf("\nWelcome to nationalised bank");
    printf("\nSelect which u want to do. \n1.Create Account and Perform transaction- deposit or withdrawal \n2.Balance Check \n3.Interest calculation for a given account \n4.Generate last 5 transcations");
    printf("\nSelect 1,2,3,4 or 5...");
    scanf("%d",&m);
    printf("\nHow many accounts u want to create?");
    scanf("%d",&n);
    
    create_account(a,n);
    switch(m)
    {
        case 1:
            transaction(a,n);
            break;
        case 2:
            transaction(a,n);
            balance_check(a,n);
            break;
        case 3:
            transaction(a,n);
            interest_calculation(a,n);
            break;
        case 4:
            mini_statement(a,n);
            break;
        default:
            printf("\nEnter either 1,2,3,4");

    }  
}