// This is used to print characters 
// 

// Date: 2024-11-02
// Author: Dinesh Brindavanam

#include<stdio.h>

int main(void)
{
    char c = 'a';
    printf("c in ASCII is %d\n", c);
    printf("c the character %c\n", c);
    printf("Three cosecutive chars are : %c%c%c \n", c, c+1, c+2);
    printf("Three bell rings chars are : %c%c%c \n", '\a', '\a', '\a');
    return 0;
}
