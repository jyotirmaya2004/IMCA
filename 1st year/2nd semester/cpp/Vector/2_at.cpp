#include <iostream>
#include <vector>
using namespace std;
main()
{
	vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
	cout << cars.at(2);
	// Change an element in a vector at index position 2:

	vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
	cars.at(2) = "Toyota";
	for (string car : cars)
	{
		cout << car << " ";
	}
}