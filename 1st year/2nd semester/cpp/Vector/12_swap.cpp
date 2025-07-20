#include <iostream>
#include <vector>
using namespace std;
main()
{
	// Swap the contents of two vectors:

	vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
	vector<string> fruits = {"Apple", "Banana", "Cherry", "Orange"};

	cars.swap(fruits);

	cout << "Cars:\n";
	for (string car : cars)
	{
		cout << car << "\n";
	}

	cout << "\nFruits:\n";
	for (string fruit : fruits)
	{
		cout << fruit << "\n";
	}
}