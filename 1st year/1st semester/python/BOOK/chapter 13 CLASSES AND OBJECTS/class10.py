class Temperature:
    def __init__(self, celsius):
        self.celsius = celsius

    def to_fahrenheit(self):
        return (self.celsius * 9/5) + 32

    def to_celsius(self, fahrenheit):
        return (fahrenheit - 32) * 5/9

temp = Temperature(25)
print(f"25°C in Fahrenheit: {temp.to_fahrenheit()}°F")
print(f"77°F in Celsius: {temp.to_celsius(77):.2f}°C")
