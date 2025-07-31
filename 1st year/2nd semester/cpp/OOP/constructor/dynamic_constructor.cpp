#include <iostream>
using namespace std;

class Array {
    int* arr;
    int size;

public:
    // Dynamic constructor
    Array(int s) {
        size = s;
        arr = new int[size];  // Dynamic memory allocation
        for (int i = 0; i < size; ++i)
            arr[i] = i + 1;
    }

    void display() {
        for (int i = 0; i < size; ++i)
            cout << arr[i] << " ";
        cout << endl;
    }

    // Destructor to free memory
    ~Array() {
        delete[] arr;
        cout << "Memory released\n";
    }
};

int main() {
    Array a(5);
    a.display();
    return 0;
}
