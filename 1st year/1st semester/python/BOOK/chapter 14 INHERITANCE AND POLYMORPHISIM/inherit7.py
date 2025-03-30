class Electric:
    def battery_info(self):
        return "Battery capacity: 85 kWh"

class Car:
    def engine_info(self):
        return "Engine type: V8"

class HybridCar(Electric, Car):
    def hybrid_info(self):
        return "Hybrid car with both electric and gas engine."

hybrid = HybridCar()
print(hybrid.battery_info())   # Output: Battery capacity: 85 kWh
print(hybrid.engine_info())    # Output: Engine type: V8
print(hybrid.hybrid_info())    # Output: Hybrid car with both electric and gas engine.
