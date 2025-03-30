class Animal:
    def sound(self):
        print("The animal makes a sound.")

class Dog(Animal):
    def sound(self):
        print("The dog barks.")

my_dog = Dog()
my_dog.sound()  # Output: The dog barks.
