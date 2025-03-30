def insert_substring(original, sub, pos):
    space=" "
    return original[:pos] + sub+space + original[pos:]

# Example usage
original_string = input("Enter a string : ")
substring = input("Enter a substring : ")
position =int (input ("Enter the position of string : "))
new_string = insert_substring(original_string, substring, position)
print(new_string)  # Output: Hello Beautiful World