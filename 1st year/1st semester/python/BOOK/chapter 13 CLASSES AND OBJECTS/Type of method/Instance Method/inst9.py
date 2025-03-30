class NumberCheck:
    def __init__(self, num):
        self.num = num

    def is_even(self):
        return self.num % 2 == 0

n = NumberCheck(10)
print(n.is_even())  # Output: True
