class Vehicle:
    def __init__(self, brand, model):
        self.brand = brand
        self.model = model

    class Engine:
        def __init__(self, horsepower):
            self.horsepower = horsepower

        def display(self):
            print("Horsepower:", self.horsepower)

    def display(self):
        print("Brand:", self.brand)
        print("Model:", self.model)
        engine = self.Engine(250)
        engine.display()

class Car(Vehicle):
    def __init__(self, brand, model, doors):
        super().__init__(brand, model)
        self.doors = doors

    def display(self):
        super().display()
        print("Doors:", self.doors)

car = Car("Toyota", "Camry", 4)
car.display()
