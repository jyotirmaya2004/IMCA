class Vehicle:
    def honk(self):
        return "Vehicle is honking!"

class Bike(Vehicle):
    def honk(self):
        return "Bike is honking: Beep Beep!"

bike1 = Bike()
print(bike1.honk())  # Output: "Bike is honking: Beep Beep!"
