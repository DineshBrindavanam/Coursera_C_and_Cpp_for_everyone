#include <stdio.h>
#include <math.h>

int main() {
    double x;

    // Prompt the user for input
    printf("Enter a value for x (between 0 and 1): ");
    scanf("%lf", &x);

    // Check if the input is within the valid range
    if (x < 0 || x > 1) {
        printf("Error: x must be between 0 and 1.\n");
        return 1;
    }

    // Calculate the sine of x (in radians)
    double sine_value = sin(x);

    // Print the result
    printf("The sine of %lf is: %lf\n", x, sine_value);

    return 0;
}
