#include <stdio.h>
#include <stdarg.h>
// Variadic function to calculate the sum of given integers
int sum(int count, ...) {
    va_list args;
    int total = 0;

    // Initialize the argument list
    va_start(args, count);

    // Loop through all the arguments
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int); // Retrieve the next argument
    }

    // Clean up the argument list
    va_end(args);

    return total;
}
int main() {
    // Example usage of the sum function
    int result1 = sum(3, 10, 20, 30);  // Sum of 3 numbers: 10, 20, 30
    int result2 = sum(5, 1, 2, 3, 4, 5); // Sum of 5 numbers: 1, 2, 3, 4, 5
    // Display the results
    printf("The sum of 10, 20, 30 is: %d\n", result1);
    printf("The sum of 1, 2, 3, 4, 5 is: %d\n", result2);
   		 return 0;
}

