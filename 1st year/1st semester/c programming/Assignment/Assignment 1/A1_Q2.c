/*
 * C Program to Calculate the Area and Circumference of a Circle
 */

 #include <stdio.h>
 #include <math.h>

 #ifndef M_PI
 #define M_PI 3.14159265358979323846
 #endif
 
 int main() {
     double radius, circumference, area;
     
     // Prompt user for input
     printf("Enter the radius of the circle: ");
     
     // Input validation
     if (scanf("%lf", &radius) != 1 || radius <= 0) {
         printf("Invalid input! Please enter a positive number.\n");
         return 1; // Exit with an error code
     }
     
     // Calculate circumference and area
     circumference = 2 * M_PI * radius;
     area = M_PI * radius * radius;
     
     // Display results
     printf("\nCircle Properties:\n");
     printf("-----------------------------\n");
     printf("Radius        : %.2lf units\n", radius);
     printf("Circumference : %.2lf units\n", circumference);
     printf("Area          : %.2lf square units\n", area);
     
     return 0;
 }
 