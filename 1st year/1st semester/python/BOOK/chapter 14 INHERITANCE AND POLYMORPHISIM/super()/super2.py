class Animal:
    def __init__(self, name):
        self.name = name

    def eat(self):
        print(f"{self.name} is eating.")

class Mammal(Animal):
    def __init__(self, name, age):
        super().__init__(name)
        self.age = age

    def eat(self):
        super().eat()
        print(f"{self.name} is drinking milk.")

class Dog(Mammal):
    def __init__(self, name, age, breed):
        super().__init__(name, age)
        self.breed = breed

    def eat(self):
        super().eat()
        print(f"{self.name} is eating dog food.")

dog = Dog("Max", 3, "Golden Retriever")
dog.eat()


