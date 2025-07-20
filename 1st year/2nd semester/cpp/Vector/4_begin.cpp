#include <iostream>
#include <vector>
using namespace std;
main()
{
	// Get the first element in a vector:

	vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
	vector<string>::iterator it = cars.begin();
	cout << *it;
	// Returns:	An iterator pointing to the first element in the vector.
}