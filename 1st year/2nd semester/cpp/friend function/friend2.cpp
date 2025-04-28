#include<iostream>
using namespace std;

class Box {
private:
    int length;
    int width;

public:
    Box(int l, int w) {
        length = l;
        width = w;
    }

    friend void showLength(Box b);  // 1st friend function
    friend void showWidth(Box b);   // 2nd friend function
};

// Friend function 1
void showLength(Box b) {
    cout << "Length is: " << b.length << endl;
}

// Friend function 2
void showWidth(Box b) {
    cout << "Width is: " << b.width << endl;
}

int main() {
    Box myBox(20, 10);

    showLength(myBox);  // call first friend
    showWidth(myBox);   // call second friend

    return 0;
}
