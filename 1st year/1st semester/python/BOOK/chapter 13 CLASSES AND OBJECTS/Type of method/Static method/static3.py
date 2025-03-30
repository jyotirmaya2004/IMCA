class TemperatureConverter:
    @staticmethod
    def to_fahrenheit(celsius):
        return (celsius * 9/5) + 32

print(TemperatureConverter.to_fahrenheit(25))  # Output: 77.0
