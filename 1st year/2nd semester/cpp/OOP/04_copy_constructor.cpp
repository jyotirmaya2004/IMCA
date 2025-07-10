
#include<iostream>
using namespace std;

class Number {
    public:
    int value;

    Number(int v) {
        value = v;
    }

    Number(const Number &n) {
        value = n.value;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(100);
    Number n2 = n1;
    n2.display();
    return 0;
}
