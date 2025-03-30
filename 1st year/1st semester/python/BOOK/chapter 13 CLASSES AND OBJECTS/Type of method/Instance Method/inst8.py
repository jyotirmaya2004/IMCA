class BankAccount:
    def __init__(self, account_holder, balance):
        self.account_holder = account_holder
        self.balance = balance

    def withdraw(self, amount):
        if amount <= self.balance:
            self.balance -= amount
            return f"Withdrawal successful. New balance: {self.balance}"
        else:
            return "Insufficient balance"

account = BankAccount("Alice", 1000)
print(account.withdraw(200))  # Output: Withdrawal successful. New balance: 800
