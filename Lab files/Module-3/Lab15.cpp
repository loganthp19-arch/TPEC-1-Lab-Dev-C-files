#include <stdio.h>
// Function to calculate the Nth Tribonacci number
int tribonacci(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    int a = 0, b = 1, c = 1, next;
    for (int i = 3; i <= n; i++) {
        next = a + b + c; // Calculate the next term
        a = b; // Update a to the next term
        b = c; // Update b to the next term
        c = next; // Update c to the next term
    }

    return c;
}
int main() {
    int n;
    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &n);
    // Calculate and display the Nth Tribonacci number
    printf("The %dth Tribonacci number is: %d\n", n, tribonacci(n));
    return 0;
}
