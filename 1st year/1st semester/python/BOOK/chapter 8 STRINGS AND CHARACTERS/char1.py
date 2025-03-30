#a python program to know the nature of character enter by user
ch = input("Enter a character: ")
if ch.isalnum():
    print("The character is alphanumeric.")
if ch.isalpha():
    print("The character is alphabet.")
if ch.isdigit():
    print("The character is digit.")
if ch.islower():
    print("The character is lowercase.")
if ch.isupper():
    print("The character is uppercase.")
if ch.isspace():
    print("The character is space.")
if ch.isprintable():
    print("The character is printable.")
if ch.isdecimal():
    print("The character is decimal.")
if ch.isnumeric():
    print("The character is numeric.")
if ch.isidentifier():
    print("The character is identifier.")