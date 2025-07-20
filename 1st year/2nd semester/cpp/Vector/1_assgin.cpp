#include <iostream>
#include <vector>
using namespace std;

main()
{
	vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
	vector<string> carbrands;

	carbrands.assign(cars.begin(), cars.end());

	for (string brand : carbrands)
	{
		cout << brand << "\n";
	}
	vector<string> myVector;

	myVector.assign(4, "Jyotirmaya");

	for (string item : myVector)
	{
		cout << item << "\n";
	}
}