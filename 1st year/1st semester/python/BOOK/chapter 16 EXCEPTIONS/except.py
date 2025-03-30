class InsufficientFundsError(Exception):
    def __init__(self, balance, amount):
        self.balance = balance
        self.amount = amount
        super().__init__(f"Insufficient funds: balance={balance}, amount={amount}")

def withdraw(balance, amount):
    if amount > balance:
        raise InsufficientFundsError(balance, amount)
    return balance - amount

try:
    print(withdraw(100, 200))
except InsufficientFundsError as e:
    print(e)  # Output: Insufficient funds: balance=100, amount=200

