from fractions import Fraction

class FractionClass:
    def __init__(self, num, den):
        self.frac = Fraction(num, den)

    def add(self, other):
        return FractionClass(self.frac.numerator * other.frac.denominator + 
                             other.frac.numerator * self.frac.denominator,
                             self.frac.denominator * other.frac.denominator)

    def multiply(self, other):
        return FractionClass(self.frac.numerator * other.frac.numerator,
                             self.frac.denominator * other.frac.denominator)

    def __str__(self):
        return str(self.frac)

frac1 = FractionClass(1, 2)
frac2 = FractionClass(2, 3)

print("Addition:", frac1.add(frac2))  # 7/6
print("Multiplication:", frac1.multiply(frac2))  # 1/3
