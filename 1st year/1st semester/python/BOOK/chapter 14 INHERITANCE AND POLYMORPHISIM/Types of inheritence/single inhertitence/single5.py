#Create a parent class called Vehicle with a method drive() that prints a message. Create a child class called Car that inherits from Vehicle and overrides the drive() method to print a different message. Create an instance of Car and call its drive() method.

#Solution

class Vehicle:
    def drive(self):
        print("The vehicle is moving.")

class Car(Vehicle):
    def drive(self):
        print("The car is driving.")

my_car = Car()
my_car.drive()
