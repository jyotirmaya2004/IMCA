/*
 * C Program to Find the Roots of a Quadratic Equation
 
 */

 #include <math.h>
 #include <stdio.h>
 
 int main() {
     double a, b, c;
     double discriminant, root1, root2;
 
     // Prompt user for coefficients
     printf("Enter the coefficients of the quadratic equation (ax^2 + bx + c = 0):\n");
     
     // Validate input for 'a' to avoid division by zero
     while (1) {
         printf("a = ");
         if (scanf("%lf", &a) != 1) {
             printf("Invalid input! Please enter a number.\n");
             return 1;
         }
         if (a != 0) {
             break;
         }
         printf("Coefficient 'a' cannot be zero. Please enter again.\n");
     }
 
     printf("b = ");
     if (scanf("%lf", &b) != 1) {
         printf("Invalid input! Please enter a number.\n");
         return 1;
     }
 
     printf("c = ");
     if (scanf("%lf", &c) != 1) {
         printf("Invalid input! Please enter a number.\n");
         return 1;
     }
 
     // Display entered values
     printf("\nThe entered values are: a = %.2lf, b = %.2lf, c = %.2lf\n", a, b, c);
 
     // Calculate discriminant
     discriminant = b * b - 4 * a * c;
 
     // Determine the nature of the roots
     if (discriminant > 0) {
         // Two distinct real roots
         root1 = (-b + sqrt(discriminant)) / (2 * a);
         root2 = (-b - sqrt(discriminant)) / (2 * a);
         printf("\nRoots are real and different.\n");
         printf("Root 1 = %.2lf\n", root1);
         printf("Root 2 = %.2lf\n", root2);
     } else if (discriminant == 0) {
         // One real root
         root1 = -b / (2 * a);
         printf("\nRoots are real and the same.\n");
         printf("Root = %.2lf\n", root1);
     } else {
         // No real roots, complex roots exist
         double realPart = -b / (2 * a);
         double imagPart = sqrt(-discriminant) / (2 * a);
         printf("\nNo real roots exist. Complex roots are:\n");
         printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
         printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
     }
 
     return 0;
 }
 