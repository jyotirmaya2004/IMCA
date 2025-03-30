#alternative way to sort the strings
strings = [input(f"Enter string {i+1}: ") for i in range(int(input("Enter the number of strings: ")))]
sorted_strings = sorted(strings)  # Creates a new sorted list

print("Sorted strings are:")
print("\n".join(sorted_strings))  # Print each string on a new line
