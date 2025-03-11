#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "structure_acc.h"
void create_account(struct account *a,int n)
{
    int acc=1000;
    for(int i=0;i<n;i++)
    {
        if(i==1){
            printf("creating 1st account\n");}
        else if(i==2){
            printf("creating 2nd account\n");}
        else if(i==3){
            printf("creating 3rd account\n");}
        else{
            printf("creating %dth accound\n",i);}
        printf("Account number: %d\n",acc);
        printf("\nenter name..");
        scanf(" %[^\n]s%*c",a[i].name);
        fflush(stdin);
        a[i].acc_id=1000+i;
        strcpy(a[i].branch, "UBI PESSIT");
        a[i].branch[10]='\0';
        a[i].rate_interest=0.065;
        printf("\nEnter inital balance..");
        scanf("%d",&a[i].balance);
        for(int j=0;j<31;j++)
        {
            a[i].month[j]=a[i].balance;
        }
        acc++;
    }
    
}
