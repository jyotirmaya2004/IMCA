#Overloading Operators for a Complex Number Class

class ComplexNumber:
    def __init__(self, real, imag):
        self.real = real
        self.imag = imag

    def __add__(self, other):
        if isinstance(other, ComplexNumber):
            return ComplexNumber(self.real + other.real, self.imag + other.imag)
        elif isinstance(other, (int, float)):
            return ComplexNumber(self.real + other, self.imag)
        else:
            raise TypeError("Unsupported operand type for +")

    def __sub__(self, other):
        if isinstance(other, ComplexNumber):
            return ComplexNumber(self.real - other.real, self.imag - other.imag)
        elif isinstance(other, (int, float)):
            return ComplexNumber(self.real - other, self.imag)
        else:
            raise TypeError("Unsupported operand type for -")

    def __mul__(self, other):
        if isinstance(other, ComplexNumber):
            return ComplexNumber(self.real * other.real - self.imag * other.imag,
                                   self.real * other.imag + self.imag * other.real)
        elif isinstance(other, (int, float)):
            return ComplexNumber(self.real * other, self.imag * other)
        else:
            raise TypeError("Unsupported operand type for *")

    def __truediv__(self, other):
        if isinstance(other, ComplexNumber):
            denominator = other.real ** 2 + other.imag ** 2
            return ComplexNumber((self.real * other.real + self.imag * other.imag) / denominator,
                                   (self.imag * other.real - self.real * other.imag) / denominator)
        elif isinstance(other, (int, float)):
            return ComplexNumber(self.real / other, self.imag / other)
        else:
            raise TypeError("Unsupported operand type for /")

    def __str__(self):
        return f"{self.real} + {self.imag}i"

# Test the ComplexNumber class
num1 = ComplexNumber(3, 4)
num2 = ComplexNumber(2, 1)

print(num1 + num2)  # Output: 5 + 5i
print(num1 - num2)  # Output: 1 + 3i
print(num1 * num2)  # Output: 10 + 5i
print(num1 / num2)  # Output: 2.2 + 0.4i
