#include <iostream>
using namespace std;

int main() {
    int x = 5;

    auto showX = [x]() {
        cout << "x = " << x << endl;
    };

    showX(); // Uses x from outside
    return 0;
}
