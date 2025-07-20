#include <iostream>
#include <vector>
using namespace std;
main()
{
	vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
	cout << cars.max_size();
	//The max_size() function returns the maximum number of elements that a vector can store.
}