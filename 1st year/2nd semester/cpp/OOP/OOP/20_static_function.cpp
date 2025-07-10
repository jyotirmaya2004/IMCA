
#include<iostream>
using namespace std;

class Demo {
    public:
    static void show() {
        cout << "Static function called" << endl;
    }
};

int main() {
    Demo::show();
    return 0;
}
