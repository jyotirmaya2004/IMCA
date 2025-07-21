#include <iostream>
using namespace std;

int main() {
    int x = 5;

    auto modify = [&x]() {
        x = 10;
    };

    modify();
    cout << "x = " << x << endl;
    return 0;
}
