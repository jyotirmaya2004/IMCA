#include <iostream>
#include <vector>
using namespace std;
main()
{
	// Access the memory block used by the vector at index position 1:

	vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
	string *data = cars.data();
	cout << data[1];
}