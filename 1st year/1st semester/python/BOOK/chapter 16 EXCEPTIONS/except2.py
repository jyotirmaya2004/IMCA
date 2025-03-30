def divide(x, y):
    try:
        result = x / y
        return result
    except ZeroDivisionError:
        print("Error: cannot divide by zero!")
        return None

print(divide(10, 2))  # Output: 5.0
print(divide(10, 0))  # Output: Error: cannot divide by zero!

