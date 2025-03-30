"""Remove all vowels from a string."""
def remove_vowels(s):
    vowels = "aeiouAEIOU"
    result = ''
    for char in s:
        if char not in vowels:
            result += char
    return result

# Example usage:
print(remove_vowels("hello world"))
