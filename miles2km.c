// This displays the total distance of marathon and half-marathon  
//      in kilometers

// Date: 2024-10-31
// Author: Dinesh Brindavanam

#include<stdio.h>

int main (void)
{
    int miles = 26, yards = 385;
    double marathon, half_marathon; 
    marathon = 1.609 * (miles + yards / 1760.0);
    half_marathon = marathon / 2;
    printf("\nA marathon is %lf kilometers.", marathon);
    printf("\nA half-marathon is %lf kilometers. \n\n", half_marathon);
    return 0;
}