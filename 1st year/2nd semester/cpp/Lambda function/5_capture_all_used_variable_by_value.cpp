#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    auto lambda = [=]() {
        cout << "a: " << a << ", b: " << b << endl;
        // a = 30; ❌ Cannot modify value-captured variables
    };

    lambda();
    return 0;
}
