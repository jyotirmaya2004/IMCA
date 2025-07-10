
#include<iostream>
using namespace std;

class Test {
    public:
    int a;
    void setA(int a) {
        this->a = a;
    }
    void show() {
        cout << "a: " << a << endl;
    }
};

int main() {
    Test t;
    t.setA(5);
    t.show();
    return 0;
}
