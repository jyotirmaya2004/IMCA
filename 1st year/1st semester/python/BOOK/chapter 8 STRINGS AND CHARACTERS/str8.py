strings = []  # Avoid using 'str' as a variable name

n = int(input("Enter the number of strings: "))

for i in range(n):
    print("Enter the string", i + 1, end=": ")
    strings.append(input())  # Append user input to the list

strings.sort()  # Sort the list in place

print("Sorted strings are:")
for string in strings:
    print(string)

