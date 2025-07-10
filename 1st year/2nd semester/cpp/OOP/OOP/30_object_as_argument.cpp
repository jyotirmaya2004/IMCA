
#include<iostream>
using namespace std;

class Box {
    public:
    int length;
    void set(int l) { length = l; }
    void compare(Box b) {
        if (length > b.length) cout << "Current is bigger" << endl;
        else cout << "Passed is bigger" << endl;
    }
};

int main() {
    Box b1, b2;
    b1.set(10);
    b2.set(5);
    b1.compare(b2);
    return 0;
}
