/*Simple interest calculation*/
#include<stdio.h>
void main()
{
	
	float principal,time,rate,simple_interest;
	printf("Enter principal,time,rate:");
	scanf("%f%f%f",&principal,&time,&rate);
    simple_interest=(principal*time*rate)/100;
    printf("Simple Interest=%.2f",simple_interest);
}

