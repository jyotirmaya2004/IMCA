/*
 * C Program to Find the Largest Among Three Numbers
 */

 #include <stdio.h>

 int main() {
     int num1, num2, num3, largest;
 
     // Taking input from the user
     printf("Enter three numbers separated by spaces: ");
     scanf("%d %d %d", &num1, &num2, &num3);
 
     // Display the entered numbers
     printf("\nThe entered numbers are: %d, %d, and %d\n", num1, num2, num3);
 
     // Determine the largest number
     largest = (num1 >= num2) ? ((num1 >= num3) ? num1 : num3) : ((num2 >= num3) ? num2 : num3);
 
     // Print the largest number
     printf("The largest number is: %d\n", largest);
 
     return 0;
 }
 