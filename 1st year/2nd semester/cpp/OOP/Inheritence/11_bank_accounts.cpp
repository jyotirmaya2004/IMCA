
// Problem 5: Bank Account Inheritance
#include <iostream>
using namespace std;

class Account {
protected:
    double balance;
public:
    Account(double b) : balance(b) {}
    virtual void display() {
        cout << "Balance: " << balance << endl;
    }
};

class Savings : public Account {
public:
    Savings(double b) : Account(b) {}
    void display() override {
        cout << "Savings ";
        Account::display();
    }
};

class Checking : public Account {
public:
    Checking(double b) : Account(b) {}
    void display() override {
        cout << "Checking ";
        Account::display();
    }
};

int main() {
    Savings s(1000);
    Checking c(500);
    s.display();
    c.display();
    return 0;
}
