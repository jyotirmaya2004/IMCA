class Account:
    def __init__(self, balance):
        self.__balance = balance  # Private attribute

    @property
    def balance(self):
        return self.__balance

    def deposit(self, amount):
        self.__balance += amount
        return f"Deposited: {amount}, New Balance: {self.__balance}"

account = Account(1000)
print(account.balance)  # 1000
print(account.deposit(500))  # 1500
