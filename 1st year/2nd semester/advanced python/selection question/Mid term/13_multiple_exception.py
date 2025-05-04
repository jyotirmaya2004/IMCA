def divide_numbers():
    try:
        num1 = float(input("Enter numerator: "))
        num2 = float(input("Enter denominator: "))
        result = num1 / num2
    except ValueError:
        print("Error: Please enter valid numeric values.")
    except ZeroDivisionError:
        print("Error: Division by zero is not allowed.")
    else:
        print(f"Result of division: {result}")
    finally:
        print("Program execution completed.")

# Run the function
divide_numbers()
