/*Celsius to Fahrenheit and viceversa*/
#include<stdio.h>
void main()
{
	float c,f,choice;
	printf("Enter Choice:");
	scanf("%f",&choice);
	if(choice==0)
	{
		printf("\nConversion from CELSIUS to FAHRENHEIT scale:");
		printf("\nEnter temperature in celsius:");
		scanf("%f",&c);
		f=(9*c)/5+32;
		printf("\nTemperature in FAHRENHEIT:%f",f);		
	}
	else if(choice)
	{
		printf("\nConversion from FAHRENHEIT to CELSIUS scale:");
		printf("\nEnter temperature in fahrenheit:");
		scanf("%f",&f);
		c=5*(f-32)/9;
		printf("\nTemperature in Celsius:%f",c);
	}
	else 
	{
		printf("\nInvalid Choice!");
	}
}
