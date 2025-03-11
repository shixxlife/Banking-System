#include<stdio.h>
#include<math.h>
void HomeLoan_EMI_Calculation()
{
    int home_loan_amt;
    int tenure;
    float rate;
    float earned;
    printf("Enter home loan amount...\n");
    scanf("%d",&home_loan_amt);
    printf("Enter tenure in months...\n");
    scanf("%d",&tenure);
    printf("Enter the interest rate...\n");
    scanf("%f",&rate);
    int HL=home_loan_amt;
    int N=tenure;
    float r=rate;
    r=(r/12)/100;

    float EMI;
    EMI=HL*r*pow(1+r,N)/(pow((1+r),N)-1);

    float payable_amt;
    payable_amt=EMI*N;
    earned=payable_amt-HL;

    printf("Total amount payable is %.2f\n",payable_amt);
    printf("Interest amount is %.2f\n",earned);

    
}