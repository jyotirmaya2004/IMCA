class Calculator:
    def calculate(self, *args):
        print("Calculating result...")

class AdvancedCalculator(Calculator):
    def calculate(self, *args):
        result = 0
        for num in args:
            result += num
        return result

calculator = AdvancedCalculator()
print(calculator.calculate(1, 2, 3, 4, 5))  # Output: 15


