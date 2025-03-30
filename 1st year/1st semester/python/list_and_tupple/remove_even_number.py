# Program to remove even numbers from a list
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]
odd_numbers = [x for x in numbers if x % 2 != 0]
print("List after removing even numbers:", odd_numbers)
