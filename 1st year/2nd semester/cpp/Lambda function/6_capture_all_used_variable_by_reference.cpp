#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    auto lambda = [&]() {
        a += 5;
        b += 10;
        cout << "Inside lambda: a = " << a << ", b = " << b << endl;
    };

    lambda();
    cout << "Outside lambda: a = " << a << ", b = " << b << endl;
    return 0;
}
