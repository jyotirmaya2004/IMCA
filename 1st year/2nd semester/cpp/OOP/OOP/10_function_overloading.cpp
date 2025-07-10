
#include<iostream>
using namespace std;

class Math {
    public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math m;
    cout << "Int add: " << m.add(3, 4) << endl;
    cout << "Double add: " << m.add(2.5, 4.1) << endl;
    return 0;
}
