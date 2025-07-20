#include <iostream>
#include <vector>
using namespace std;
main()
{
	// Clear the contents of a vector:

	vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
	cout << "Size before: " << cars.size() << "\n";
	cars.clear();
	cout << "Size after: " << cars.size() << "\n";
}