"""Convert a string to a list of words (split by spaces)."""
def string_to_words(s):
    words = []
    word = ''
    for char in s:
        if char == ' ':
            if word:
                words.append(word)
                word = ''
        else:
            word += char
    if word:  # Add the last word
        words.append(word)
    return words

# Example usage:
print(string_to_words("hello world, this is Python"))
