/*ARITHMETIC OPERATIONS*/
#include <stdio.h>
void main() 
{
    int choice;
    float a,b,c;
    printf("Enter a,b: ");
    scanf("%f%f",&a,&b);
    printf("\n--- Arithmetic Operations ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch(choice) 
    {
        case 1:
                c=a+b;
                printf("Result: %.2f\n",c);
                break;
        case 2:
                c=a-b;
                printf("Result: %.2f\n",c);
            break;
        case 3: 
            c=a*b;
            printf("Result: %.2f\n",c);
            break;
        case 4:
            if (b==0) 
            {
                printf("Division by zero is not possible\n");
            } 
            else 
            {
                c=a/b;
                printf("Result: %.2f\n",c);
            }
            break;
        default:
            printf("Invalid option\n");
            
    }
}
