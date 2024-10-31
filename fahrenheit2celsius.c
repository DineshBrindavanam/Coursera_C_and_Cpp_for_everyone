// This is a calculator used to user-defined fahrenheit 
//      to celsius

// Date: 2024-10-31
// Author: Dinesh Brindavanam

#include<stdio.h>

int main()
{
    float fahren, celsius;
    printf("Enter the value of fahrenheit to be converted to celsius: ");
    scanf("%f", &fahren);
    celsius = (fahren - 32)/1.8;
    printf("%f fahrenheit is %f celsius. \n\n", fahren, celsius);
    return 0;
}