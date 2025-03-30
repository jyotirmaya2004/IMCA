class DistanceConverter:
    @staticmethod
    def km_to_miles(km):
        return km * 0.621371

print(DistanceConverter.km_to_miles(10))  # Output: 6.21371
