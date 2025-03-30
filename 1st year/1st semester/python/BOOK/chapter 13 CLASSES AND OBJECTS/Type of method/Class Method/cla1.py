class Car:
    wheels = 4  # Class variable

    @classmethod
    def change_wheels(cls, new_wheel_count):
        cls.wheels = new_wheel_count

print(Car.wheels)  # Output: 4
Car.change_wheels(6)
print(Car.wheels)  # Output: 6
