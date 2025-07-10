
#include<iostream>
using namespace std;

class Counter {
    public:
    static int count;
    Counter() {
        count++;
    }
};

int Counter::count = 0;

int main() {
    Counter a, b, c;
    cout << "Count: " << Counter::count << endl;
    return 0;
}
