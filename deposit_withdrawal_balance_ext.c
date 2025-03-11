#include<stdio.h>
extern float april[30],may[31],june[30];
extern float sum_interest_april;
extern float sum_interest_may;
extern float sum_interest_june;
int Deposit_withdrawal_BalanceCheck(float *april,float *may,float *june)
{
    int i,j;
    
    //starting balance of April is 50,000
    printf("You may start adding money to your Account\n");
    printf("Adding money to month of april\n");
    printf("Enter the amount for the 1st day of april...\n");
    float x;
    scanf("%f",&x);
    april[0]=x;
    for(i=1;i<30;i++)
    {
        int b;
        printf("Do you want to deposit or withdraw money?\n enter 1 for deposit \nenter 2 for withdraw...");
        scanf("%d",&b);
        if(b==1)
        {
            float amt;
            printf("\nEnter the amount to be deposited...");
            scanf("%f",&amt);
            april[i]=amt+april[i-1];
        }
        else
        {
            float amt;
            printf("\nEnter the amount to be withdrawn...");
            scanf("%f",&amt);
            april[i]=april[i-1]-amt;
        }

    }
    for(i=0;i<30;i++)
    {
        sum_interest_april+=((april[i]*(3.5/100))/365);
    }    

    printf("\nDo you want to check the balance for the month of April??\n Press 1 for YES or 0 for NO...\n");
    int v;
    scanf("%d",&v);
    if(v==1)
    {
        int c;
        printf("Which date of month of April do you want to check the balance?\n Enter a number between 1 to 30...");
        scanf("%d",&c);
        if(c==1)
            printf("\nThe balance for 1st of april is %f",april[c]);
        else if(c==2)
            printf("\nThe balance for 1st of april is %f",april[c]);
        else
            printf("\nThe balance for %dth of april is %f",c,april[c]);
    }

    printf("\nMay Month\n");
    
    may[0]=april[30]+sum_interest_april;
    printf("Commencing the addition of amounts for may month\n");

    for(i=1;i<31;i++)
    {
        int b;
        printf("Do you want to deposit or withdraw money?\n enter 1 for deposit \nenter 2 for withdraw....");
        scanf("%d",&b);
        if(b==1)
        {
            float amt;
            printf("\nEnter the amount to be deposited...");
            scanf("%f",&amt);
            may[i]=amt+may[i-1];
        }
        else
        {
            float amt;
            printf("\nEnter the amount to be withdrawn....");
            scanf("%f",&amt);
            may[i]=may[i-1]-amt;
        }

    }
    for(i=0;i<31;i++)
    {
        sum_interest_may+=((may[i]*(3.5/100))/365);
    }

    printf("\nDo you want to check the balance for the month of May??\n Press 1 for YES or 0 for NO...\n");
    int w;
    scanf("%d",&w);
    if(w==1)
    {
        int c;
        printf("Which date of month of May do you want to check the balance?\n Enter a number between 1 to 31....");
        scanf("%d",&c);
        if(c==1)
            printf("\nThe balance for 1st of May is %f",may[c]);
        else if(c==2)
            printf("\nThe balance for 1st of May is %f",may[c]);
        else
            printf("\nThe balance for %dth of May is %f",c,may[c+1]);
    }


    printf("\nJune Month\n");
    
    june[0]=may[31]+sum_interest_may;

    printf("Commencing the addition of amounts for june month\n");

    for(i=1;i<30;i++)
    {
        int b;
        printf("Do you want to deposit or withdraw money?\n enter 1 for deposit \nenter 2 for withdraw....");
        scanf("%d",&b);
        if(b==1)
        {
            float amt;
            printf("\nEnter the amount to be deposited...");
            scanf("%f",&amt);
            june[i]=amt+june[i-1];
        }
        else
        {
            float amt;
            printf("\nEnter the amount to be withdrawn...");
            scanf("%f",&amt);
            june[i]=june[i-1]-amt;
        }

    }  
    for(i=0;i<30;i++)
    {
        sum_interest_june+=((june[i]*(3.5/100))/365);
    }
    printf("\nDo you want to check the balance for the month of June??\n Press 1 for YES or 0 for NO...\n");
    int z;
    scanf("%d",&z);
    if(z==1)
    {
        int c;
        printf("Which date of month of June do you want to check the balance?\n Enter a number between 1 to 30....");
        scanf("%d",&c);
        if(c==1)
            printf("\nThe balance for 1st of June is %f",june[c]);
        else if(c==2)
            printf("\nThe balance for 1st of June is %f",june[c]);
        else
            printf("\nThe balance for %dth of June is %f",c,june[c+1]);
    }

    


}