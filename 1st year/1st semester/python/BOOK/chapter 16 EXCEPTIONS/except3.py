def divide(x, y):
    if y == 0:
        raise ValueError("Cannot divide by zero!")
    return x / y

try:
    print(divide(10, "a"))
except ValueError as e:
    print(e)
except Exception as e:
    print(e)