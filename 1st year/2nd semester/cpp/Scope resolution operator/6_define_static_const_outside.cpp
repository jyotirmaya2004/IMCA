#include <iostream>
using namespace std;

class Circle {
public:
    static const float PI;
};

// Definition of const static variable using ::
const float Circle::PI = 3.14159;

int main() {
    cout << "Value of PI: " << Circle::PI << endl;
    return 0;
}
