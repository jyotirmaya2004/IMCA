class Calculator:
    def calculate(self, *args):
        if len(args) == 1:
            return args[0] ** 2
        elif len(args) == 2:
            return args[0] + args[1]
        elif len(args) == 3:
            return args[0] * args[1] + args[2]
        else:
            raise ValueError("Invalid number of arguments")

calculator = Calculator()
print(calculator.calculate(5))  # Output: 25
print(calculator.calculate(5, 3))  # Output: 8
print(calculator.calculate(5, 3, 2))  # Output: 17
