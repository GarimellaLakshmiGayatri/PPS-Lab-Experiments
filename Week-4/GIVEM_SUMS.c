/*Evaluating given expression variants*/
#include<stdio.h>
void main()
{
	float A=2,B=4,C=3,D=5,E=2,F=1,G=6;
	int i=5,J;
	// a. A+B*C+(D*E)+F*G
	float ans_a= A+B*C+(D*E)+F*G;
	// b. A/B*C-B+A*D/3;
	float ans_b= A/B*C-B+A*D/3;
	// c. (A++) + (B--) - A;
	float ans_c= (A++) + (B--) - A;
	// d. J=(i++) + (++i);
	J= (i++) + (++i);
	printf("\nExpression a result:%.2f",ans_a);
	printf("\nExpression b result:%.2f",ans_b);
	printf("\nExpression c result:%.2f",ans_c);
	printf("\nExpression d result(J):%d",J);
}
