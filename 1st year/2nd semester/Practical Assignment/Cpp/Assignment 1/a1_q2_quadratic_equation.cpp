/*Write a cpp program to that will define the rule of quadratic equation
 where a, b, c are runtime input
 	Filename : a1_q2_quadratic_equation.cpp
	Author name : Jyotirmaya Behera
	Date : 25th March 2025
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;
	int x1,x2;
	cout<<"Enter value for a : ";
	cin>>a;
	cout<<"Enter value for b : ";
	cin>>b;
	cout<<"Enter value for c : ";
	cin >> c;
    cout << "The quadratic equation: " << a << "x\u00B2 + " << b << "x + " << c << " = 0" << endl;
	int D = pow(b, 2) - (4 * a * c);
	if (D > 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << "Roots are real and distinct: x1 = " << x1 << ", x2 = " << x2 << endl;
	} else if (D == 0) {
		x1 = x2 = -b / (2 * a);
		cout << "Roots are real and equal: x1 = x2 = " << x1 << endl;
	} else {
		cout << "Roots are complex and imaginary." << endl;
	}
}