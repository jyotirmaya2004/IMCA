#Create a parent class called Vehicle with attributes brand, model, and year. Create a child class called Car that inherits from Vehicle and adds an attribute num_doors. Create an instance of Car and print its attributes.

#Solution

class Vehicle:
    def __init__(self, brand, model, year):
        self.brand = brand
        self.model = model
        self.year = year

class Car(Vehicle):
    def __init__(self, brand, model, year, num_doors):
        super().__init__(brand, model, year)
        self.num_doors = num_doors

my_car = Car("Toyota", "Corolla", 2015, 4)
print(my_car.brand)
print(my_car.model)
print(my_car.year)
print(my_car.num_doors)
