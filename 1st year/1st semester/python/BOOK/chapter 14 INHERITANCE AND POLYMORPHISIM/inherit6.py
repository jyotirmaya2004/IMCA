class Vehicle:
    def describe(self):
        return "This is a vehicle."

class Car(Vehicle):
    def describe(self):
        parent_desc = super().describe()
        return f"{parent_desc} And this is a car."

car = Car()
print(car.describe())  # Output: This is a vehicle. And this is a car.
