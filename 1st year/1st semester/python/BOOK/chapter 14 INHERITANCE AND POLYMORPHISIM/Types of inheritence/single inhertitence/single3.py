#Create a parent class called Animal with attributes name and age. Create a child class called Dog that inherits from Animal and adds an attribute breed. Create an instance of Dog and print its attributes.

#Solution

class Animal:
    def __init__(self, name, age):
        self.name = name
        self.age = age

class Dog(Animal):
    def __init__(self, name, age, breed):
        super().__init__(name, age)
        self.breed = breed

my_dog = Dog("Fido", 3, "Golden Retriever")
print(my_dog.name)
print(my_dog.age)
print(my_dog.breed)

