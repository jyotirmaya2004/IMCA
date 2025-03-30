class NumberUtils:
    @staticmethod
    def is_even(number):
        return number % 2 == 0

print(NumberUtils.is_even(10))  # Output: True
print(NumberUtils.is_even(7))   # Output: False
