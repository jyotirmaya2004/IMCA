#include <iostream>
using namespace std;

int main() {
    auto sayHello = []() {
        cout << "Hello World!" << endl;
    };

    sayHello(); // Calling the lambda
    return 0;
}
