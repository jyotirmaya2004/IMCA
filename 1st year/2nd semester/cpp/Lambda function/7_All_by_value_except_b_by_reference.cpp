#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    auto lambda = [=, &b]() {
        // a = 15; ❌ Cannot modify a (captured by value)
        b = 100; // ✅ b is captured by reference
        cout << "Inside lambda: a = " << a << ", b = " << b << endl;
    };

    lambda();
    cout << "Outside lambda: a = " << a << ", b = " << b << endl;
    return 0;
}
