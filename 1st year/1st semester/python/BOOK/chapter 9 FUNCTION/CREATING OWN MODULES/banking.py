#banking.py (the module file)

class BankAccount:
    def __init__(self, account_number, account_name, balance=0):
        self.account_number = account_number
        self.account_name = account_name
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount
        return self.balance

    def withdraw(self, amount):
        if amount > self.balance:
            raise ValueError("Insufficient funds")
        self.balance -= amount
        return self.balance

    def get_balance(self):
        return self.balance

def create_account(account_number, account_name, balance=0):
    return BankAccount(account_number, account_name, balance)

def deposit(account, amount):
    return account.deposit(amount)

def withdraw(account, amount):
    return account.withdraw(amount)

def get_balance(account):
    return account.get_balance()

def main():
    # Example usage
    account = create_account("1234567890", "John Doe", 1000)
    print(f"Initial balance: {get_balance(account)}")

    deposit(account, 500)
    print(f"Balance after deposit: {get_balance(account)}")

    withdraw(account, 200)
    print(f"Balance after withdrawal: {get_balance(account)}")

if __name__ == "__main__":
    main()
