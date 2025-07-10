
#include<iostream>
using namespace std;

class Sample {
    public:
    int val;
    void set(int v) { val = v; }
    void show() { cout << "Value: " << val << endl; }
};

int main() {
    Sample *arr[2];
    for (int i = 0; i < 2; i++) {
        arr[i] = new Sample();
        arr[i]->set(i + 1);
    }
    for (int i = 0; i < 2; i++) arr[i]->show();
    return 0;
}
