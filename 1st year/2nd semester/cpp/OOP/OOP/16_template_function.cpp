
#include<iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add<int>(3, 4) << endl;
    cout << add<float>(3.1f, 4.2f) << endl;
    return 0;
}
