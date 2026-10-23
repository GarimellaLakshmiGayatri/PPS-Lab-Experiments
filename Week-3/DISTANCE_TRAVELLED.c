/*Distance travelled by object*/
#include<stdio.h>
void main()
{
	float a,u,t,d;
	printf("Enter initial_velocity,acceleration,time:");
	scanf("%f%f%f",&u,&a,&t);
	d=u*t+0.5*(a*t*t);
	printf("Distance travelled by object:%.2f",d);
	
}
