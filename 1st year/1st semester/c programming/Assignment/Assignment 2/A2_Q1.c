/*
 * C Program to Check Whether an Integer is Odd or Even Without Using Modulo Operator
 */

 #include <stdio.h>

 int main() {
     int num;
     
     // Prompt user for input
     printf("Enter a number: ");
     
     // Input validation
     if (scanf("%d", &num) != 1) {
         printf("Invalid input! Please enter an integer.\n");
         return 1; // Exit with an error code
     }
     
     // Check if the number is odd or even using bitwise AND operator
     if (num & 1) {
         printf("%d is an odd number.\n", num);
     } else {
         printf("%d is an even number.\n", num);
     }
     
     return 0;
 }
 