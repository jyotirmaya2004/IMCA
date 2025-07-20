#include <iostream>
#include <vector>
using namespace std;
main()
{
	// Remove the last element from a vector:

	vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
	cars.pop_back();
	for (string car : cars)
	{
		cout << car << "\n";
	}
}