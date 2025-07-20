#include <iostream>
#include <vector>
using namespace std;
main()
{
	// Add an element at the end of a vector:

	vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

	cars.push_back("Toyota");

	for (string car : cars)
	{
		cout << car << "\n";
	}
}