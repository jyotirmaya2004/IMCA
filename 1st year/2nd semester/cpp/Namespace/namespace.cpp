#include <iostream>
using namespace std;

namespace Math {
    int add(int a, int b) {
        return a + b;
    }
}

namespace Physics {
    int add(int a, int b) {
        return a * b; // suppose it represents force = mass * acceleration
    }
}

int main() {
    cout << "Math Add: " << Math::add(5, 3) << endl;
    cout << "Physics Add: " << Physics::add(5, 3) << endl;
    return 0;
}
