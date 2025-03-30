/*
 *This C program finds the smallest number among three numbers
 *entered by the user as run-time input.
 */

 #include <stdio.h>

 int main() {
   int num1, num2, num3, smallest;
 
   printf("\n\nEnter the first number: ");
   scanf("%d", &num1);
   printf("Enter the second number: ");
   scanf("%d", &num2);
   printf("Enter the third number: ");
   scanf("%d", &num3);
   printf("\nThe entered numbers are %d, %d, and %d.", num1, num2, num3);
 
   if (num1 <= num2) {
     if (num1 <= num3) {
       smallest = num1;
     } else {
       smallest = num3;
     }
   } else {
     if (num2 <= num3) {
       smallest = num2;
     } else {
       smallest = num3;
     }
   }
 
   // Print the largest number
   printf("\n\nThe smallest number is: %d\n\n", smallest);
 
   return 0;
 }