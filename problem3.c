//3. Write a C program to enter the radius of a circle and find its diameter, circumference and area.
#include <stdio.h>

    int main()
{
    float r,pi=3.14;
    printf("Enter Radius Of The Circle:");
    scanf("%f", &r);
    printf("Diameter Of The Circle Is %.2f\nArea Of The Circle Is %.2f\nCircumference Of The Circle Is %.2f",r*2, r * pi * pi, 2 * pi * r);
    return 0;
}
