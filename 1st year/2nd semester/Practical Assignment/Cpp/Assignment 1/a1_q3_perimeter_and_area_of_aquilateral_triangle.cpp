/*write a cpp program that will the perimeter and area of the equilateral triangle whose side value is accepted as runtime
	File name : a1_q3_perimeter_and_area_of_aquilateral_triangle.cpp
	Author name : Jyotirmaya Behera
	Date : 25th March 2025
	*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float side;
	cout << "Enter the side of the equilateral triangle: ";
	cin >> side;
	float perimeter = 3 * side;
	float area = (sqrt(3) / 4) * side * side;
	cout << "Perimeter of the equilateral triangle: " << perimeter << endl;
	cout << "Area of the equilateral triangle: " << area << endl;

	return 0;

}