/*SUM AND AVERAGE OF THREE NUMBERS*/
#include<stdio.h>
void main()
{
	int a,b,c,sum;
	float avg;
	printf("Enter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	avg=(a+b+c)/3;
	printf("\nSum of %d,%d,%d : %d",a,b,c,sum);
	printf("\nAverage of %d,%d,%d : %.2f",a,b,c,avg);
}






