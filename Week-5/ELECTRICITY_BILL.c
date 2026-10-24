/*ELECTRICITY BILL*/
#include <stdio.h>

int main() 
{
     float units, totalBill=0;
     printf("Enter the units consumed: ");
     scanf("%f",&units);
     if(units<=100) 
     {
        totalBill = units * 1.50;
     } 
     else if(units <= 200) 
     {
        totalBill = (100 * 1.50) + ((units - 100) * 2.50);
     } 
    else if(units <= 500) 
    {
        totalBill = (100 * 1.50) + (100 * 2.50) + ((units - 200) * 4.00);
    }    
    else 
    {
        totalBill = (100 * 1.50) + (100 * 2.50) + (300 * 4.00) + ((units - 500) * 6.00);
    }
    printf("Total bill amount: %.2f\n", totalBill);
}
