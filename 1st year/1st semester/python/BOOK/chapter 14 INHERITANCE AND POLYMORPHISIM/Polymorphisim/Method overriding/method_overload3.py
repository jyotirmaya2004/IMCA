class Vehicle:
    def drive(self, speed=60):
        print(f"Driving at {speed} km/h.")

class Car(Vehicle):
    def drive(self, speed=80):
        print(f"Driving car at {speed} km/h.")

my_car = Car()
my_car.drive()  # Output: Driving car at 80 km/h.

