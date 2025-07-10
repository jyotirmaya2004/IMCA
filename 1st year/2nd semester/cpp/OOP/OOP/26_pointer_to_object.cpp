
#include<iostream>
using namespace std;

class Sample {
    public:
    void show() {
        cout << "Pointer to object demo" << endl;
    }
};

int main() {
    Sample s, *ptr = &s;
    ptr->show();
    return 0;
}
