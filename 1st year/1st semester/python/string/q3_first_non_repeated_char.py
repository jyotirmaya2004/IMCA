"""Find the first non-repeated character in a string."""
def first_non_repeated(s):
    for char in s:
        if s.count(char) == 1:
            return char
    return None  # If no non-repeated character exists

# Example usage:
print(first_non_repeated("swiss"))
