import os

# File name
file_name = "sample.txt"

# 1. Writing to a file
with open(file_name, "w") as file:
    file.write("Hello, this is a sample text file.\n")
    file.write("File handling in Python is simple!\n")

print("File written successfully.")

# 2. Reading from a file
with open(file_name, "r") as file:
    content = file.read()
    print("\nContent of the file:")
    print(content)

# 3. Appending to a file
with open(file_name, "a") as file:
    file.write("Appending a new line to the file.\n")

print("Data appended successfully.")

# 4. Reading line by line
with open(file_name, "r") as file:
    print("\nReading file line by line:")
    for line in file:
        print(line.strip())

# 5. Checking if file exists and deleting it
if os.path.exists(file_name):
    os.remove(file_name)
    print("\nFile deleted successfully.")
else:
    print("\nFile does not exist.")

