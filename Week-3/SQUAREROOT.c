/*Squareroot of a given number*/
#include<stdio.h>
#include<math.h>
void main()
{
	int n,square_root;
	printf("Enter n:");
	scanf("%d",&n);
	if(n<0)
	{
		printf("\nSquare root of a negative number is not real");
	}
	else
	{
		 square_root=sqrt(n);
	     printf("\nSquare root of %d is %d",n,square_root);
    }
}
