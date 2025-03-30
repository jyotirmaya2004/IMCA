# Input string
text = "Hello World! 123  "
sub_text = "Hello"

# 1. Case Conversion
print("Capitalize:", text.capitalize())          # Capitalize the first letter
print("Uppercase:", text.upper())                # Convert to uppercase
print("Lowercase:", text.lower())                # Convert to lowercase
print("Title Case:", text.title())               # Convert to title case
print("Swap Case:", text.swapcase())             # Swap the case

# 2. Alignment
print("Center:", text.center(30, '*'))           # Center align with padding
print("Left Align:", text.ljust(30, '-'))        # Left align with padding
print("Right Align:", text.rjust(30, '-'))       # Right align with padding

# 3. Search and Replace
print("Find 'Hello':", text.find(sub_text))      # Find the first occurrence
print("Replace 'Hello' with 'Hi':", text.replace("Hello", "Hi"))  # Replace text

# 4. Splitting and Joining
split_text = text.split()                        # Split by spaces
print("Split:", split_text)                      # Split into list
print("Join:", "-".join(split_text))             # Join with hyphen
print("Splitlines:", "Line1\nLine2".splitlines())# Split lines

# 5. Trimming and Padding
print("Strip:", text.strip())                    # Remove leading and trailing whitespace
print("Lstrip:", text.lstrip())                  # Remove leading whitespace
print("Rstrip:", text.rstrip())                  # Remove trailing whitespace

# 6. Validation
print("Is Alpha:", "Hello".isalpha())            # Check if all characters are alphabetic
print("Is Digit:", "123".isdigit())              # Check if all characters are digits
print("Is Alnum:", "Hello123".isalnum())         # Check if alphanumeric
print("Is Space:", "   ".isspace())              # Check if all are spaces
print("Is Lower:", "hello".islower())            # Check if all are lowercase
print("Is Upper:", "HELLO".isupper())            # Check if all are uppercase
print("Is Title:", "Hello World".istitle())      # Check if title case

# 7. Miscellaneous
print("Count 'l':", text.count('l'))             # Count occurrences of 'l'
print("Startswith '  H':", text.startswith("  H")) # Check if starts with substring
print("Endswith '123  ':", text.endswith("123  ")) # Check if ends with substring
print("Zero Fill (length 10):", "123".zfill(10)) # Pad with zeros
