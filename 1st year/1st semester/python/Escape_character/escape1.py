# Using all escape sequences in a single program

print("Single Quote: \'")                    # Single quote
print("Double Quote: \"")                    # Double quote
print("Backslash: \\")                       # Backslash
print("Newline: Line1\nLine2")               # Newline
print("Tab: Hello\tWorld")                   # Horizontal tab
print("Carriage Return:","Hello\rWorld")       # Carriage return
print("Backspace: Hello\bWorld")             # Backspace
print("Form Feed: Hello\fWorld")             # Form feed
print("Vertical Tab: Hello\vWorld")          # Vertical tab
print("Bell (Alert): \a")                    # Bell sound (may not work on some systems)

# Unicode escape sequences
print("16-bit Unicode: \u00A9")              # Unicode for ©
print("32-bit Unicode: \U0001F600")          # Unicode for 😀 (smiley face)

# Hexadecimal and Octal escape sequences
print("Hexadecimal: \x41")                   # Hexadecimal for 'A'
print("Octal: \101")                         # Octal for 'A'

# Null character
print("Null Character: Hello\0World")        # Null character

# Named Unicode character
print("Named Unicode: \N{GREEK CAPITAL LETTER DELTA}")  # Δ

# Raw string to ignore escape sequences
print(r"Raw String: This is a raw string, escape sequences like \n, \t are ignored.")
