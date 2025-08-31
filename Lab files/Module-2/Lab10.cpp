#include <stdio.h>
// Function to calculate the nth triangular number
int triangularNumber(int n) {
    return (n * (n + 1)) / 2;
}
int main() {
    int n, i;

    // Input for how many triangular numbers to generate
    printf("Enter the number of triangular numbers to generate: ");
    scanf("%d", &n);

    // Generate and display the first n triangular numbers
   printf("The first %d triangular numbers are:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", triangularNumber(i));
    }
   printf("\n");

  	  return 0;
}
