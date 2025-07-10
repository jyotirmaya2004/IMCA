
#include<iostream>
using namespace std;

namespace Demo {
    void show() {
        cout << "Inside namespace Demo" << endl;
    }
}

int main() {
    Demo::show();
    return 0;
}
