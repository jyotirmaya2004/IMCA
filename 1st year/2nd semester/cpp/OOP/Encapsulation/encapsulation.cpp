#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string name, int accNo, double initialBalance) {
        accountHolder = name;
        accountNumber = accNo;
        balance = initialBalance;
    }

    // Getter for balance (Read-Only Access)
    double getBalance() {
        return balance;
    }

    // Deposit method (Write Access with validation)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw method (Write Access with validation)
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or insufficient funds!" << endl;
        }
    }

    // Show account details (Controlled read access)
    void showAccountDetails() {
        cout << "\nAccount Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    // Creating object (Encapsulated Data)
    BankAccount myAccount("Rahul Kumar", 123456, 5000.00);

    myAccount.showAccountDetails();

    // Trying to access private data directly (Not allowed)
    // myAccount.balance = 10000;  ❌ Error!

    myAccount.deposit(2000);
    myAccount.withdraw(1500);

    cout << "\nFinal Balance: " << myAccount.getBalance() << endl;

    return 0;
}
