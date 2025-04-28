#include<iostream>
using namespace std;

// Inline function
inline int square(int x) {
    return x * x;
}

int main() {
    cout << "Square of 5: " << square(5) << endl;
    cout << "Square of 10: " << square(10) << endl;
    return 0;
}
