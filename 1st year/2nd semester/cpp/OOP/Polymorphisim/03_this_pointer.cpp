
// 'this' Pointer Example
#include <iostream>
using namespace std;

class Box {
    int length;
public:
    Box(int length) {
        this->length = length;
    }
    void show() {
        cout << "Length is: " << this->length << endl;
    }
};

int main() {
    Box b(15);
    b.show();
    return 0;
}
