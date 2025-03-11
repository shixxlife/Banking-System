#include<stdio.h>
#include<math.h>
void Interest_and_MaturityAmount_FD()
{
    float maturity_amt;
    int principal_amt;
    float rate;
    int closing_period;
    float earned;
    printf("enter principal amount...\n");
    scanf("%d",&principal_amt);
    printf("enter interest rate...\n");
    scanf("%f",&rate);
    printf("enter closing period in terms of years..\n");
    scanf("%d",&closing_period);
    int P=principal_amt;
    float r=rate;
    int t=closing_period;
    float A=maturity_amt;

    if(t==5)
    {
        A=P*pow((1+r/2),2*t);
        printf("maturity amount is %.2f\n",A);
        earned=A-P;
        printf("Intrest Earned is %.2f\n",earned);
    }
    else if(t<5)
    {
        if(t==4)
        {
            r-=0.5;
            A=P*pow((1+r/2),2*t);
            printf("maturity amount is %f\n",A);
            earned=A-P;
            printf("Intrest Earned is %f\n",earned);
            }
        else if(t==3)
        {
            r-=(2*0.5);
            A=P*pow((1+r/2),2*t);
            printf("maturity amount is %f\n",A);
            earned=A-P;
            printf("Intrest Earned is %f\n",earned);
            }
        else if(t==2)
        {
            r-=(3*0.5);
            A=P*pow((1+r/2),2*t);
            printf("maturity amount is %f\n",A);
            earned=A-P;
            printf("Intrest Earned is %f\n",earned);
            }
        
        else if(t==1)
        {
            r-=(4*0.5);
            A=P*pow((1+r/2),2*t);
            printf("maturity amount is %f\n",A);
            earned=A-P;
            printf("Intrest Earned is %f\n",earned);
            }            
            

        }
    
}