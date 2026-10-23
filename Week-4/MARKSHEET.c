/*Marks of a student*/
#include<stdio.h>
void main()
{
	int tel,hin,eng,mat,sci;
	float total,avg;
	printf("Enter telugu,hindi,english,maths,science marks:");
	scanf("%d%d%d%d%d",&tel,&hin,&eng,&mat,&sci);
	total=tel+hin+eng+mat+sci;
	avg=total/5;
	printf("Total Marks Secured:%.2f",total);
	printf("\nAverage Marks:%.2f",avg);
}
