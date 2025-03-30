class BankAccount:
    interest_rate = 3.5  # Class variable

    @classmethod
    def set_interest_rate(cls, new_rate):
        cls.interest_rate = new_rate

print(BankAccount.interest_rate)  # Output: 3.5
BankAccount.set_interest_rate(4.0)
print(BankAccount.interest_rate)  # Output: 4.0
