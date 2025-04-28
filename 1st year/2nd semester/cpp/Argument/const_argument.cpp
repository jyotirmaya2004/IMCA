/*What is a Const Argument?
A const argument in C++ is a parameter passed to a function that cannot be modified inside the function. By declaring a function parameter as const, you are ensuring that the value passed to the function cannot be changed.

Why Use Const Arguments?
Prevent Modification: It ensures that the function doesn't accidentally modify the passed argument, which can prevent bugs and unexpected behavior.

Code Readability: It helps make the code more readable by explicitly telling the programmer that the argument shouldn't change.

Efficiency: When passing large objects (like arrays or classes), passing by reference and using const ensures that no unnecessary copies are made, and the function cannot modify the object.

Syntax

void functionName(const type param);
const: Keyword that ensures the argument cannot be modified.

type: Type of the variable (e.g., int, char, string, etc.).

param: The parameter passed to the function.

Examples of Const Arguments
1. Const Argument with Basic Types:

#include <iostream>
using namespace std;

void printValue(const int num) {  // `num` is a const argument
    // num = 10;  // ERROR: Cannot modify a const argument
    cout << "The value is: " << num << endl;
}

int main() {
    int x = 5;
    printValue(x);  // Passing `x` as a const argument
    // x = 10;  // This won't affect the original `x`
    return 0;
}
Here, num is a const argument, so it cannot be modified inside printValue().

2. Const Argument with Pointers:

#include <iostream>
using namespace std;

void modifyValue(const int *ptr) {  // Pointer to const integer
    // *ptr = 10;  // ERROR: Cannot modify the value pointed to by ptr
    cout << "The value is: " << *ptr << endl;
}

int main() {
    int x = 5;
    modifyValue(&x);  // Passing the address of x
    // x = 10;  // Original x is not modified
    return 0;
}
const int *ptr: Pointer to constant. You cannot modify the value the pointer is pointing to, but you can modify the pointer itself (i.e., point it to another address).

3. Const Reference Argument:

#include <iostream>
using namespace std;

void printName(const string &name) {  // Reference to const string
    // name = "John";  // ERROR: Cannot modify a const reference
    cout << "Hello, " << name << endl;
}

int main() {
    string userName = "Alice";
    printName(userName);  // Passing by reference, but cannot modify inside function
    return 0;
}
const string &name: The reference is passed by reference, so there’s no copying of data. But since it's a const reference, you cannot modify the string inside the function.

Types of Const Arguments:
Const by Value:

You pass a value to the function, and the function cannot modify it.

Example: void function(const int x);

Const by Pointer:

You pass a pointer to the function, but the function cannot modify the value being pointed to.

Example: void function(const int *ptr);

Const by Reference:

You pass a reference to the function (to avoid copying large data), but the function cannot modify the data being referred to.

Example: void function(const int &ref);

When Should You Use Const Arguments?
When you're passing large objects (like arrays, strings, or classes) to a function but want to avoid making copies.

When you want to ensure that the original argument passed to the function is not modified.

When you're passing pointer types and don't want the pointer to change the value it points to.

*/