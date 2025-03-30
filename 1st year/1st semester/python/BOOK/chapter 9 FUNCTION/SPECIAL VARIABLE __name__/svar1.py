def greet():
    print("Hello from module!")

if __name__ == "__main__":
    print("This script is run directly.")
    greet()
else:
    print("This script is imported as a module.")
