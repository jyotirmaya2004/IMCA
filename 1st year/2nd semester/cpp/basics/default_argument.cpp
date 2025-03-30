#include <iostream>
using namespace std;
void greet(string = "Guest", string = "Welcome!");

int main() {
    // Calling function without arguments
    greet();

    // Calling function with one argument
    greet("Alice");

    // Calling function with both arguments
    greet("Bob", "Good to see you!");

    return 0;
}
// Function with default arguments
void greet(string name, string message) {
    cout << "Hello, " << name << "! " << message << endl;
}
