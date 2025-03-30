class BankAccount:
    def __init__(self, balance=0):
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount
        return f"Deposited: {amount}, New Balance: {self.balance}"

    def withdraw(self, amount):
        if amount > self.balance:
            return "Insufficient balance"
        self.balance -= amount
        return f"Withdrew: {amount}, New Balance: {self.balance}"

acc = BankAccount(1000)
print(acc.deposit(500))
print(acc.withdraw(200))
print(acc.withdraw(2000))  # Should show insufficient balance
