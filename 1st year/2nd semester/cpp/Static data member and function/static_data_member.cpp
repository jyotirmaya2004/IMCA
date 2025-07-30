#include<iostream>
using namespace std;

class Counter {
    static int count; // Declaration
public:
    void increment() {
        count++;
        cout << "Count = " << count << endl;
    }
};

// Definition outside the class
int Counter::count = 0;

int main() {
    Counter c1, c2;
    c1.increment(); // Count = 1
    c2.increment(); // Count = 2 (shared!)
}
