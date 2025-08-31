#include <stdio.h>
#include <stdlib.h>
int main() {
int n, q,i=0;
scanf("%d %d", &n, &q);
// Create an array of dynamic arrays for the shelves
int** shelves = (int**)malloc(n * sizeof(int*));
int* sizes = (int*)malloc(n * sizeof(int)); // To keep track of the number of books in each shelf
int last_ans = 0;
// Initialize sizes
for ( i = 0; i < n; i++) {
sizes[i] = 0;
shelves[i] = NULL; // Initialize each shelf to NULL
}
// Process each query
for ( i = 0; i < q; i++) {
int query_type, x, y;
scanf("%d %d %d", &query_type, &x, &y);
// Calculate the index for the shelf
int idx = (x ^ last_ans) % n;
if (query_type == 1) {
// Add a book with y pages to shelf idx
shelves[idx] = (int*)realloc(shelves[idx], (sizes[idx] + 1) * sizeof(int));
shelves[idx][sizes[idx]] = y; // Add the number of pages
sizes[idx]++; // Increment the count of books on shelf idx
} else if (query_type == 2) {
// Retrieve the number of pages in the y-th book on shelf idx
last_ans = shelves[idx][y % sizes[idx]];
printf("%d\n", last_ans);
} else if (query_type == 3) {
// Print the total number of books on shelf idx
printf("%d\n", sizes[idx]);
}
}
// Free allocated memory
for ( i = 0; i < n; i++) {
free(shelves[i]); // Free each shelf
} free(shelves); // Free the shelves array
free(sizes); // Free the sizes array
return 0;
}
