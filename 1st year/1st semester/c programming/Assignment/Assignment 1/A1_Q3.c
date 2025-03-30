/*
    C Program to Calculate the Area and Perimeter of a Square
*/

 #include <stdio.h>

 int main() {
     double side, perimeter, area;
     
     // Prompt user for input
     printf("Enter the side of the square: ");
     
     // Input validation
     if (scanf("%lf", &side) != 1 || side <= 0) {
         printf("Invalid input! Please enter a positive number.\n");
         return 1; // Exit with an error code
     }
     
     // Calculate perimeter and area
     perimeter = 4 * side;
     area = side * side;
     
     // Display results
     printf("\nSquare Properties:\n");
     printf("-----------------------------\n");
     printf("Side         : %.2lf units\n", side);
     printf("Perimeter    : %.2lf units\n", perimeter);
     printf("Area         : %.2lf square units\n", area);
     
     return 0;
 }
 