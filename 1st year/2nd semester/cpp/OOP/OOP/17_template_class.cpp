
#include<iostream>
using namespace std;

template <class T>
class Box {
    public:
    T value;
    Box(T v) : value(v) {}
    void show() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Box<int> b1(10);
    Box<string> b2("OOPs");
    b1.show();
    b2.show();
    return 0;
}
