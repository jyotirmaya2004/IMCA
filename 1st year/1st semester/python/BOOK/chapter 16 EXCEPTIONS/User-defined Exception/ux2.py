class InsufficientBalanceError(Exception):
    def __init__(self, balance, amount):
        message = f"Insufficient balance: ${balance} (need ${amount})"
        super().__init__(message)

class BankAccount:
    def __init__(self, balance):
        self.balance = balance

    def withdraw(self, amount):
        if amount > self.balance:
            raise InsufficientBalanceError(self.balance, amount)
        else:
            self.balance -= amount
            print(f"Withdrew ${amount}. Remaining balance: ${self.balance}")

try:
    account = BankAccount(100)
    account.withdraw(150)
except InsufficientBalanceError as e:
    print(e)


