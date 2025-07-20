#include <iostream>
#include <vector>
using namespace std;
main()
{
	vector<int> v = {1, 2, 3, 4, 5};

    int n = v.size();
    for (int i = 0; i < n / 2; ++i) {
        // Swap elements from front and back
        int temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = temp;
    }

    // Print reversed vector
    for (int i : v) {
        cout << i << " ";
    }
}