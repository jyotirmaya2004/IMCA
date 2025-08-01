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

    friend void showLength(Box b);
    friend void showWidth(Box b);   
};


void showLength(Box b) {
    cout << "Length is: " << b.length << endl;
}


void showWidth(Box b) {
    cout << "Width is: " << b.width << endl;
}

int main() {
    Box myBox(20, 10);

    showLength(myBox);  // call first friend
    showWidth(myBox);   // call second friend

    return 0;
}
