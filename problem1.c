///1. Write a C program to enter two numbers and perform all arithmetic operations.
#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter the 1st number:");
    scanf("%f", &a);
    printf("Enter the 2nd number:");
    scanf("%f", &b);
    printf("Sum = %.1f\nMultiplication = %.1f\nDivision = %.1f\nSubstraction = %.1f", a + b, a * b, a / b, a - b);

    return 0;
}