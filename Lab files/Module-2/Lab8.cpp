#include <stdio.h>
// Function to calculate the area of a triangle
float calculateArea(float base, float height) {
 return (0.5 * base * height);
}
int main() {
    float base1, height1, base2, height2, area1, area2;
   // Input for the first triangle
    printf("Enter the base and height of the first triangle: ");
    scanf("%f %f", &base1, &height1);
    // Input for the second triangle
   printf("Enter the base and height of the second triangle: ");
   scanf("%f %f", &base2, &height2);
   // Calculate the areas of both triangles
    area1 = calculateArea(base1, height1);
    area2 = calculateArea(base2, height2);
    // Compare the areas and determine which triangle is larger
    printf("\nArea of first triangle: %.2f", area1);
    printf("\nArea of second triangle: %.2f", area2);
    if (area1 > area2) {
        printf("\nThe first triangle is larger.\n");
        printf("The second triangle is smaller.\n");
    } else if (area1 < area2) {
        printf("\nThe second triangle is larger.\n");
        printf("The first triangle is smaller.\n");
    } else {
        printf("\nBoth triangles have the same area.\n");
    }
    return 0;
}
