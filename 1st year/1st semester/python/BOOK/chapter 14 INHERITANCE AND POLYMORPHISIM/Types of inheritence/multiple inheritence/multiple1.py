"""Create a class hierarchy with multiple inheritance to represent the following relationships:

- A Vehicle can be either a Car or a Truck.
- A Car can be either a Sedan or a Hatchback.
- A Truck can be either a Pickup or a SemiTruck.
- A Sedan and a Hatchback are both types of Car.
- A Pickup and a SemiTruck are both types of Truck.

Create classes for each of these types and use multiple inheritance to establish the relationships between them. Then, create an instance of each class and print out its type.
"""
#Solution

class Vehicle:
    def __init__(self, brand, model):
        self.brand = brand
        self.model = model

class Car(Vehicle):
    def __init__(self, brand, model, num_doors):
        super().__init__(brand, model)
        self.num_doors = num_doors

class Truck(Vehicle):
    def __init__(self, brand, model, towing_capacity):
        super().__init__(brand, model)
        self.towing_capacity = towing_capacity

class Sedan(Car):
    def __init__(self, brand, model, num_doors, engine_size):
        super().__init__(brand, model, num_doors)
        self.engine_size = engine_size

class Hatchback(Car):
    def __init__(self, brand, model, num_doors, cargo_space):
        super().__init__(brand, model, num_doors)
        self.cargo_space = cargo_space

class Pickup(Truck):
    def __init__(self, brand, model, towing_capacity, bed_size):
        super().__init__(brand, model, towing_capacity)
        self.bed_size = bed_size

class SemiTruck(Truck):
    def __init__(self, brand, model, towing_capacity, trailer_size):
        super().__init__(brand, model, towing_capacity)
        self.trailer_size = trailer_size

sedan = Sedan("Toyota", "Camry", 4, 2.5)
hatchback = Hatchback("Honda", "Civic", 4, 15)
pickup = Pickup("Ford", "F-150", 10000, "6.5 ft")
semitruck = SemiTruck("Peterbilt", "389", 20000, "53 ft")

print(type(sedan))
print(type(hatchback))
print(type(pickup))
print(type(semitruck))

