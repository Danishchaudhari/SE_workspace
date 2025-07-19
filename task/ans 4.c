#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2;

    
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    
    printf("\nSum = %d", num1 + num2);
    printf("\nDifference = %d", num1 - num2);
    printf("\nMultiplication = %d", num1 * num2);
    printf("\nDivision = %d", num1 / num2);
   
   getch();
}
