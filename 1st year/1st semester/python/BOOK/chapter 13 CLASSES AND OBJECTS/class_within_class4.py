class BankAccount:
    def __init__(self, account_number, balance):
        self.__account_number = account_number
        self.__balance = balance

    class Transaction:
        def __init__(self, amount, type):
            self.amount = amount
            self.type = type

        def display(self):
            print("Transaction amount:", self.amount)
            print("Transaction type:", self.type)

    def deposit(self, amount):
        transaction = self.Transaction(amount, "deposit")
        self.__balance += amount
        transaction.display()

    def get_balance(self):
        return self.__balance

account = BankAccount("1234567890", 1000)
account.deposit(500)
print("Balance:", account.get_balance())


