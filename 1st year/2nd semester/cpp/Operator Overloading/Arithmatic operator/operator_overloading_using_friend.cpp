#include <iostream>
using namespace std;

class Distance {
    int meters;

public:
    Distance(int m = 0) {
        meters = m;
    }

    // Friend function for operator overloading
    friend Distance operator+(Distance d1, Distance d2);

    void display() {
        cout << meters << " meters" << endl;
    }
};

// Definition of friend function
Distance operator+(Distance d1, Distance d2) {
    return Distance(d1.meters + d2.meters);
}

int main() {
    Distance d1(10), d2(20);
    Distance d3;

    d3 = d1 + d2; // operator+ is called

    cout << "Total Distance: ";
    d3.display();

    return 0;
}
