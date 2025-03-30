#Remove duplicate characters from a string while maintaining the order.
def remove_duplicates(s):
    result = ''
    for char in s:
        if char not in result:
            result += char
    return result

# Example usage:
print(remove_duplicates("abacabad"))
