import random

class OTPGenerator:
    @staticmethod
    def generate_otp():
        return random.randint(100000, 999999)

print(OTPGenerator.generate_otp())  # Output: (Random 6-digit number)
