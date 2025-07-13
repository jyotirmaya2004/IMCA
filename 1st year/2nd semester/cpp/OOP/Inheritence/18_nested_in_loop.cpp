
// Using Nested Class in a Loop
#include <iostream>
using namespace std;

class Container {
public:
    class Item {
    public:
        void show(int i) {
            cout << "Item number: " << i << endl;
        }
    };
};

int main() {
    for (int i = 1; i <= 3; i++) {
        Container::Item item;
        item.show(i);
    }
    return 0;
}
