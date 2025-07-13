
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
