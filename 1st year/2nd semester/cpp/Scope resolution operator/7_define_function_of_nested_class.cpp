#include <iostream>
using namespace std;

class Outer {
public:
    class Inner {
    public:
        void show();  // Declaration
    };
};

// Define nested class function using ::
void Outer::Inner::show() {
    cout << "Inside Outer::Inner::show()\n";
}

int main() {
    Outer::Inner obj;
    obj.show();
    return 0;
}
