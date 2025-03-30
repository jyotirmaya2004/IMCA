class Person:
    def __init__(self, name, age):  # Constructor
        self.name = name  # Initializing instance variable
        self.age = age

    def display(self):
        print("Name:", self.name)
        print("Age:", self.age)

# Creating an object
person1 = Person("Alice", 25)
person1.display()
