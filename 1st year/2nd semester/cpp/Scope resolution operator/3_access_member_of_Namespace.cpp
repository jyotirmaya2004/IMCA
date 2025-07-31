#include <iostream>
using namespace std;

namespace MySpace {
    int val = 200;
}

int main() {
    cout << "Value from namespace: " << MySpace::val << endl;
    return 0;
}
