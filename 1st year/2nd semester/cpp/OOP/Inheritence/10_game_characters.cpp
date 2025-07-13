
// Problem 10: Game Character Hierarchy
#include <iostream>
using namespace std;

class Character {
public:
    virtual void attack() {
        cout << "Character attacks!" << endl;
    }
};

class Warrior : public Character {
public:
    void attack() override {
        cout << "Warrior swings sword!" << endl;
    }
};

class Archer : public Character {
public:
    void attack() override {
        cout << "Archer shoots arrow!" << endl;
    }
};

int main() {
    Character* c;
    Warrior w;
    Archer a;
    c = &w;
    c->attack();
    c = &a;
    c->attack();
    return 0;
}
