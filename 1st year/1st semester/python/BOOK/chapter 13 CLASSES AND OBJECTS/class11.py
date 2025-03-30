class Car:
    def __init__(self, brand, model, year, mileage=0):
        self.brand = brand
        self.model = model
        self.year = year
        self.__mileage = mileage  # Private mileage attribute

    def get_mileage(self):
        return self.__mileage

    def update_mileage(self, new_mileage):
        if new_mileage >= self.__mileage:
            self.__mileage = new_mileage
        else:
            print("Error: Mileage cannot be decreased.")

car1 = Car("Tesla", "Model S", 2023, 5000)
print(f"Initial Mileage: {car1.get_mileage()}")
car1.update_mileage(6000)
print(f"Updated Mileage: {car1.get_mileage()}")
car1.update_mileage(4000)  # Invalid case
