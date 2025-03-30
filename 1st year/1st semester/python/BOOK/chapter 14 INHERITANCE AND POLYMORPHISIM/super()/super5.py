from abc import ABC, abstractmethod

class AbstractVehicle(ABC):
    def __init__(self, brand, model):
        self.brand = brand
        self.model = model

    @abstractmethod
    def description(self):
        pass

class Vehicle(AbstractVehicle):
    def __init__(self, brand, model, year):
        super().__init__(brand, model)
        self.year = year

    def description(self):
        return f"{self.year} {self.brand} {self.model}"

class ElectricVehicle(Vehicle):
    def __init__(self, brand, model, year, battery_capacity):
        super().__init__(brand, model, year)
        self.battery_capacity = battery_capacity

    def description(self):
        return super().description() + f" with {self.battery_capacity} kWh battery"

class HybridVehicle(Vehicle):
    def __init__(self, brand, model, year, engine_capacity, electric_motor_capacity):
        super().__init__(brand, model, year)
        self.engine_capacity = engine_capacity
        self.electric_motor_capacity = electric_motor_capacity

    def description(self):
        return super().description() + f" with {self.engine_capacity}L engine and {self.electric_motor_capacity} kWh electric motor"

class ToyotaPrius(HybridVehicle):
    def __init__(self, year, engine_capacity, electric_motor_capacity):
        super().__init__("Toyota", "Prius", year, engine_capacity, electric_motor_capacity)

    def description(self):
        return super().description() + " - a hybrid vehicle"

class TeslaModel3(ElectricVehicle):
    def __init__(self, year, battery_capacity):
        super().__init__("Tesla", "Model 3", year, battery_capacity)

    def description(self):
        return super().description() + " - an electric vehicle"

# Create instances
prius = ToyotaPrius(2022, 1.8, 53)
model3 = TeslaModel3(2022, 75)

# Print descriptions
print(prius.description())
print(model3.description())

