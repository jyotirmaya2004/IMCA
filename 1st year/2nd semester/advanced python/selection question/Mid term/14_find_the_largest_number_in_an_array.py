from array import *

try:
    arr = array('i', [])
    n = int(input("Enter number of elements: "))

    for i in range(n):
        try:
            num = int(input(f"Enter element {i + 1}: "))
            arr.append(num)
        except ValueError:
            print("Invalid input! Please enter an integer.")
            continue  # Skip to next input

    print("Array elements are:", end=" ")
    for i in arr:
        print(i, end=" ")

    # Find max value with proper initialization
    if len(arr) == 0:
        raise Exception("Array is empty. Cannot find maximum.")

    max_val = arr[0]
    for i in arr:
        if i > max_val:
            max_val = i
    print("\nMax =", max_val)

except ValueError:
    print("Invalid number of elements. Please enter an integer.")
except IndexError:
    print("Index error occurred.")
except Exception as e:
    print("\nError:", e)
finally:
    print("Program completed.")
