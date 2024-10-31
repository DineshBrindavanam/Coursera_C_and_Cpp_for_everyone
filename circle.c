// This is a calculator used to computing area and circumference of 
//      circle with the user defined radius value

// Date: 2024-10-28
// Author: Dinesh Brindavanam

#include<stdio.h>

#define PI 3.14159265359

int main ()
{
    double radius = 0.0, area = 0.0, circum = 0.0; // Init all the variables
    printf("Welcome to the calculator to compute the area and circumference of the circle \n\n");
    printf("Enter the radius of the circle in meters: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    circum = 2 * PI * radius;
    printf("Area of the circle = %lf sq. meters\n", area);
    printf("Circumference of the circle = %lf meters\n", circum);

    return 0;
}