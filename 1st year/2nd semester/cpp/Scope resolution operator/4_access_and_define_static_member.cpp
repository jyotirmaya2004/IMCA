#include <iostream>
using namespace std;

class Demo {
public:
    static int count;
};

// Define static member using ::
int Demo::count = 10;

int main() {
    cout << "Static member value: " << Demo::count << endl;
    return 0;
}
