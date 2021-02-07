//2. Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
#include <stdio.h>
int main()
{
    int input;
    float temp;
    printf("Press 0 to convert Celsius To Fahrenheit Or 1 for Fahrenheit to Celsius\n");
    scanf("%d", &input);
    if (input == 0)
    {
        printf("Enter the temperature in Celsius\n");
        scanf("%f", &temp);
        printf("%.1f Celsius is %5.3f Fahrenheit.", temp, (temp * 9) / 5 + 32);
    }
    else if (input == 1)
    {
        printf("Enter the temperature in Fahrenheit\n");
        scanf("%f", &temp);
        printf("%.2f Fahrenheit is %4.2f Celsius.", temp, (temp - 32) * 5 / 9);
    }

    else
    {
        printf("You have entered something wrong!!\nPlease try again.");
    }
    return 0;
}