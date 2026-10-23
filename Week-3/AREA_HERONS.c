/*Area of triangle Using Heron's Formula*/
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,s,area;
	printf("Enter a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
    //semi-perimeter
	s=(a+b+c)/2.0;
	//herons-formula
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\nArea of the triangle:%.2f",area);
	
	
}
