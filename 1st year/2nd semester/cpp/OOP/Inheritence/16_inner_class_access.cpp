
// Member Class accessing Outer Class
#include <iostream>
using namespace std;

class Outer {
    int val = 100;
public:
    class Inner {
    public:
        void display(Outer& o) {
            cout << "Outer value: " << o.val << endl;
        }
    };
};

int main() {
    Outer o;
    Outer::Inner i;
    i.display(o);
    return 0;
}
