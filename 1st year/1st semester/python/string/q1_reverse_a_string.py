'''Reverse a string without using slicing or built-in reverse functions.'''
def reverse_string(s):
    reversed_str = ''
    for char in s:
        reversed_str = char + reversed_str
    return reversed_str

# Example usage:
print(reverse_string("hello"))
