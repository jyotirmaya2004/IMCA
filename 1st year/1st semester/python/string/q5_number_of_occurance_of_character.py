"""Count the number of occurrences of a character in a string."""
def count_occurrences(s, char):
    count = 0
    for c in s:
        if c == char:
            count += 1
    return count

# Example usage:
print(count_occurrences("hello world", "o"))
