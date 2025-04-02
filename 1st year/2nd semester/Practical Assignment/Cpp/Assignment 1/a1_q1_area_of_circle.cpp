/*write a cpp program that will compute an area of circle by accepting the radius of circle during runtime

	Filename: a1_q1_area_of_circle.cpp
	author name : Jyotirmaya Behera
	Date : 25th March 2025
*/
#include<iostream>
using namespace std;
int main()
{
	float rad;
	cout<<"Enter the radius of the circle : ";
	cin>>rad;
	float area;
	area=3.14*rad*rad;
	cout<<"The area of the circle : "<<area<<endl;
}