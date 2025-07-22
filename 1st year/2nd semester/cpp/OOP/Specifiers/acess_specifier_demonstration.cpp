#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    Base() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void showBaseMembers() {
        cout << "Inside Base class:" << endl;
        cout << "privateVar = " << privateVar << endl;
        cout << "protectedVar = " << protectedVar << endl;
        cout << "publicVar = " << publicVar << endl;
    }
};

class Derived : public Base {
public:
    void showDerivedMembers() {
        cout << "\nInside Derived class (public inheritance):" << endl;
        // cout << "privateVar = " << privateVar << endl; // ❌ Error: Not accessible
        cout << "protectedVar = " << protectedVar << endl; // ✅ Accessible
        cout << "publicVar = " << publicVar << endl;       // ✅ Accessible
    }
};

int main() {
    Base b;
    b.showBaseMembers();

    cout << "\nAccessing from main:" << endl;
    // cout << b.privateVar << endl;  // ❌ Not allowed
    // cout << b.protectedVar << endl; // ❌ Not allowed
    cout << "publicVar = " << b.publicVar << endl; // ✅ Allowed

    Derived d;
    d.showDerivedMembers();

    return 0;
}

/*Real-Life Example
Public: Like the front door of your house - anyone can come in.
Private: Like a locked drawer - only the owner (or trusted friends) can open it.
Protected: Like a family-only room - children (subclasses) can enter, others cannot.*/
