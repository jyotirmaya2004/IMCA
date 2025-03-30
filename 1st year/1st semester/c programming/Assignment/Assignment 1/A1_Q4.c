/*
 This C program calculates the area and perimeter of a rectangle
 based on the length and breadth entered by the user.
 
 */

 #include <stdio.h>

 int main() {
   double length, breadth, perimeter, area;
 
   printf("\n\nEnter the length of the Rectangle: ");
   scanf("%lf", &length);
 
   printf("Enter the breadth of the Rectangle: ");
   scanf("%lf", &breadth);
 
   perimeter = 2 * (length + breadth);
   area = length * breadth;
 
   printf("\nLength: %.2lf, Breadth: %.2lf", length, breadth);
   printf("\n\nPerimeter = 2(Length + Breadth) = %.2lf units", perimeter);
   printf("\nArea = Length x Length = %.2lf square units\n\n", area);
 
   return 0;
 }