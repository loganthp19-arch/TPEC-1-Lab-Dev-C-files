#include <stdio.h>
// Function to remove duplicates from a sorted array
int removeDuplicates(int* nums, int numsSize) {
// Edge case: if the array is empty, no unique elements exist
if (numsSize == 0) {
return 0;
}
// k will track the index of the last unique element
int k = 1;
int i;
// Start from the second element (index 1)
for (i = 1; i < numsSize; i++) {
// If the current element is different from the previous one, it's unique
if (nums[i] != nums[i - 1]) {
// Place the unique element at position k
nums[k] = nums[i];
k++; // Increment k to track the number of unique elements
}
}
// Return the number of unique elements
return k;
}
// Main function to test the removeDuplicates function
int main() {
// Example input
int nums[] = {1, 1, 2, 2, 3, 3, 4};
int i;
int numsSize = sizeof(nums) / sizeof(nums[0]);
// Calling removeDuplicates function
int newSize = removeDuplicates(nums, numsSize);
// Print the modified array and the number of unique elements
printf("Array after removing duplicates: ");
for (i = 0; i < newSize; i++) {
printf("%d ", nums[i]);
}
printf("\n");
printf("Number of unique elements: %d\n", newSize);
return 0;
}
