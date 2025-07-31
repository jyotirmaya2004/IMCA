
// Abstract Class as Interface Example
#include <iostream>
using namespace std;

class Printable {
public:
    virtual void print() = 0;
};

class Document : public Printable {
public:
    void print() override {
        cout << "Printing Document..." << endl;
    }
};

int main() {
    Document d;
    d.print();
    return 0;
}
/*Abstract Class
🔹 Definition:
A class is abstract if it has at least one pure virtual function.*/

/*❓ Why can't we create an object of an abstract class in C++?
Because an abstract class contains at least one pure virtual function, and that function has no body (implementation) in the base class.

⚠️ So what would happen if C++ allowed this?
If you tried to create an object of such a class:

The compiler wouldn't know which version of the pure virtual function to call.

The class is incomplete — it promises that derived classes will provide the actual implementation.

*/
