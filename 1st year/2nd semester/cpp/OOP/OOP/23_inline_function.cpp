
#include<iostream>
using namespace std;

class Demo {
    public:
    inline void show() {
        cout << "Inline function called" << endl;
    }
};

int main() {
    Demo d;
    d.show();
    return 0;
}
