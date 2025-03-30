"""Replace all spaces in a string with a specific character."""
def replace_spaces(s, char):
    result = ''
    for c in s:
        if c == ' ':
            result += char
        else:
            result += c
    return result

# Example usage:
print(replace_spaces("hello world", "_"))
