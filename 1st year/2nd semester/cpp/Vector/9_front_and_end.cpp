#include <iostream>
#include <vector>
using namespace std;
main()
{
	// Get the first element of a vector:

	vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
	cout << cars.front();

	// Get the last element in a vector:
	vector<string>::iterator it = cars.end() - 1;
	cout << *it;
}