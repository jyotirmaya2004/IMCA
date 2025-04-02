/*write a cpp program that will compute the simple intrest where the principal amount and the time duration duration is given as runtime input and the default intrest is 6% per annum.
	File name : a1_q3_simple_interest.cpp
	Author name : Jyotirmaya Behera
	Date : 25th March 2025
	*/
#include <iostream>
using namespace std;

float calculateSimpleInterest(float principal, float time, float rate = 6.0)
{
	return (principal * time * rate) / 100;
}

int main()
{
	float principal, time, rate;
	char choice;
	cout << "Enter the principal amount: ";
	cin >> principal;
	cout << "Enter the time duration (in years): ";
	cin >> time;
	cout << "Do you want to enter a custom interest rate? (y/n): ";
	cin >> choice;

	if (choice == 'y' || choice == 'Y')
	{
		cout << "Enter the interest rate: ";
		cin >> rate;
		cout << "The simple interest is: " << calculateSimpleInterest(principal, time, rate) << endl;
	}
	else
	{
		cout << "The simple interest is: " << calculateSimpleInterest(principal,time) << endl;
	}

	return 0;
}