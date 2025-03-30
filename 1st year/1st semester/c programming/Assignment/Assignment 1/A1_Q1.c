/*
 * A C program performs the four basic arithmetic operations
   such as addition, subtraction, multiplication, and division.

 */

 #include <stdio.h>

 // Function prototypes
 int add(int a, int b);
 int subtract(int a, int b);
 int multiply(int a, int b);
 int divide(int a, int b, int *remainder);
 
 int main() {
     int num1, num2;
     int sum, difference, product, quotient, remainder;
     int choice;
 
     printf("Enter the first integer: ");
     scanf("%d", &num1);
 
     printf("Enter the second integer: ");
     scanf("%d", &num2);
 
     printf("\nThe entered numbers are %d and %d.\n", num1, num2);
 
     // Menu for arithmetic operations
     printf("\nChoose an operation:\n");
     printf("1. Addition\n");
     printf("2. Subtraction\n");
     printf("3. Multiplication\n");
     printf("4. Division\n");
     printf("Enter your choice (1-4): ");
     scanf("%d", &choice);
 
     switch (choice) {
         case 1:
             sum = add(num1, num2);
             printf("\nSum = %d + %d = %d\n", num1, num2, sum);
             break;
 
         case 2:
             difference = subtract(num1, num2);
             printf("\nDifference = %d - %d = %d\n", num1, num2, difference);
             break;
 
         case 3:
             product = multiply(num1, num2);
             printf("\nProduct = %d x %d = %d\n", num1, num2, product);
             break;
 
         case 4:
             if (num2 == 0) {
                 printf("\nError: Division by zero is not allowed.\n");
             } else {
                 quotient = divide(num1, num2, &remainder);
                 printf("\nQuotient = %d / %d = %d\n", num1, num2, quotient);
                 printf("Remainder = %d\n", remainder);
             }
             break;
 
         default:
             printf("\nInvalid choice! Please choose a number between 1 and 4.\n");
             break;
     }
 
     return 0;
 }
 
 // Function to add two numbers
 int add(int a, int b) {
     return a + b;
 }
 
 // Function to subtract two numbers
 int subtract(int a, int b) {
     return a - b;
 }
 
 // Function to multiply two numbers
 int multiply(int a, int b) {
     return a * b;
 }
 
 // Function to divide two numbers
 int divide(int a, int b, int *remainder) {
     *remainder = a % b;
     return a / b;
 }