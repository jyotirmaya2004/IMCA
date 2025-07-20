#include <iostream>
#include <vector>
using namespace std;
main()
{
	// Get the last element of a vector:

	vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
	cout << cars.back();
	// Change the last element in a vector:

	vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
	cars.back() = "Toyota";
	for (string car : cars)
	{
		cout << car << " ";
	}
}