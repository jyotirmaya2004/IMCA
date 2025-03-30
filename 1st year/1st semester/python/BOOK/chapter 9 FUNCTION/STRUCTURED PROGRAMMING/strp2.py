class BankAccount:
    def __init__(self, account_number, holder_name, balance=0):
        self.account_number = account_number
        self.holder_name = holder_name
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount
        print(f"Deposited ${amount}. New Balance: ${self.balance}")

    def withdraw(self, amount):
        if amount > self.balance:
            print("Insufficient funds!")
        else:
            self.balance -= amount
            print(f"Withdrew ${amount}. New Balance: ${self.balance}")

    def display_balance(self):
        print(f"Account {self.account_number} - {self.holder_name}, Balance: ${self.balance}")

# Creating an account
account1 = BankAccount(101, "Alice", 1000)

# Performing transactions
account1.display_balance()
account1.deposit(500)
account1.withdraw(200)
account1.withdraw(2000)  # Insufficient funds
