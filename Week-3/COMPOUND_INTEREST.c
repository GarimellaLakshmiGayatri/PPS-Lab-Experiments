/*COMPOUND INTEREST CALCULATION*/
#include<stdio.h>
#include<math.h>
void main()
{
	float principal,amount,rate,time,compound_interest;
	printf("Enter principal_amount,rate of interest,time(in years):");
	scanf("%f%f%f",&principal,&rate,&time);
	amount=principal*pow(1+rate/100,time);
	compound_interest=amount-principal;
	printf("\nCompound Interest=%.2f",compound_interest);
}
