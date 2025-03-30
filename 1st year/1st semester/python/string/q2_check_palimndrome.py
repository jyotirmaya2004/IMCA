'''Check if a string is a palindrome (case-insensitive).'''
def is_palindrome(s):
    s = s.lower()  # Convert string to lowercase for case-insensitive comparison
    reversed_s = ''
    for char in s:
        reversed_s = char + reversed_s
    return s == reversed_s

# Example usage:
print(is_palindrome("Madam"))
