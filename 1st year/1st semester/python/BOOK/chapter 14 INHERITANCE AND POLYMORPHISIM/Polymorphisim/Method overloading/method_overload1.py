class Calculator:
    def calculate(self, arg):
        if isinstance(arg, int):
            return arg ** 2
        elif isinstance(arg, str):
            return arg.upper()
        else:
            raise ValueError("Invalid argument type")

calculator = Calculator()
print(calculator.calculate(5))  # Output: 25
print(calculator.calculate("hello"))  # Output: HELLO
