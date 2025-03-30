class Parent:
    def __init__(self, name):
        self.name = name

    def greet(self):
        print(f"Hello, my name is {self.name}.")

class Child(Parent):
    def __init__(self, name, age):
        super().__init__(name)  # Call Parent's __init__ method
        self.age = age

    def greet(self):
        super().greet()  # Call Parent's greet method
        print(f"I am {self.age} years old.")

child = Child("John", 30)
child.greet()

