#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    auto lambda = [&, a]() {
        // a = 50; ❌ Can't modify a (value captured)
        b = 200; // ✅ reference captured
        cout << "Inside lambda: a = " << a << ", b = " << b << endl;
    };

    lambda();
    cout << "Outside lambda: a = " << a << ", b = " << b << endl;
    return 0;
}
