/*Max and Min of four numbers*/
#include<stdio.h>
void main()
{
	int a,b,c,d,max,min;
	printf("Enter a,b,c,d:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
	    max=a;
	else if(b>a&&b>c&&b>d)
	    max=b;
	else if(c>a&&c>b&&c>d)
	    max=c;
	else if(d>a&&d>b&&d>c)
		max=d;
	printf("\nMaximum of the four numbers is:%d",max);
	if(a<b&&a<c&&a<d)
		min=a;
	else if(b<a&&b<c&&b<d)
		min=b;
	else if(c<a&&c<b&&c<d)
		min=c;
	else if(d<a&&d<b&&d<c)
	    min=d;
	printf("\nMinimum of the four numbers is:%d",min); 
}

