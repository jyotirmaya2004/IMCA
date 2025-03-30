class Car:
    def __init__(self, brand="Toyota", model="Corolla"):  # Default values
        self.brand = brand
        self.model = model

    def show_details(self):
        print("Brand:", self.brand)
        print("Model:", self.model)

# Creating an object without passing arguments
car1 = Car()
car1.show_details()

# Creating another object with custom values
car2 = Car("Tesla", "Model S")
car2.show_details()
