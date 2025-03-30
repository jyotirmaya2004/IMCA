from abc import ABC, abstractmethod

class Animal(ABC):
    @abstractmethod
    def make_sound(self):
        pass  # Abstract method (must be implemented in subclasses)

class Dog(Animal):
    def make_sound(self):
        return "Woof!"

class Bird(Animal):
    def make_sound(self):
        return "Chirp!"

dog = Dog()
bird = Bird()

print(dog.make_sound())  # Output: Woof!
print(bird.make_sound())  # Output: Chirp!

#animal = Animal()  # This will raise an error: TypeError: Can't instantiate abstract class
