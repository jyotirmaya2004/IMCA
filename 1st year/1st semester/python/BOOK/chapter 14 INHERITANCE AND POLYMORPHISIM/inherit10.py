class BankAccount:
    def __init__(self, balance, pin):
        self._balance = balance   # Protected attribute
        self.__pin = pin         # Private attribute

    def get_balance(self):
        return self._balance

    def _update_balance(self, amount):
        self._balance += amount

class SavingsAccount(BankAccount):
    def add_interest(self, rate):
        interest = self._balance * (rate / 100)
        self._update_balance(interest)
        return f"New balance after interest: ₹{self._balance}"

# Creating an object
account = SavingsAccount(1000, 1234)
print("Your account Balance : ₹%.2f"%account.get_balance())     # Output: 1000
print(account.add_interest(5))   # Output: New balance after interest: 1050

# Trying to access private attribute (will cause an error)
# print(account.__pin)  # AttributeError: 'BankAccount' object has no attribute '__pin'
