class Polynomial:
    def __init__(self, coefficients):
        self.coefficients = coefficients

    def __add__(self, other):
        max_len = max(len(self.coefficients), len(other.coefficients))
        result_coefficients = [0] * max_len
        for i in range(max_len):
            if i < len(self.coefficients):
                result_coefficients[i] += self.coefficients[i]
            if i < len(other.coefficients):
                result_coefficients[i] += other.coefficients[i]
        return Polynomial(result_coefficients)

    def __sub__(self, other):
        max_len = max(len(self.coefficients), len(other.coefficients))
        result_coefficients = [0] * max_len
        for i in range(max_len):
            if i < len(self.coefficients):
                result_coefficients[i] += self.coefficients[i]
            if i < len(other.coefficients):
                result_coefficients[i] -= other.coefficients[i]
        return Polynomial(result_coefficients)

    def __mul__(self, other):
        result_coefficients = [0] * (len(self.coefficients) + len(other.coefficients) - 1)
        for i in range(len(self.coefficients)):
            for j in range(len(other.coefficients)):
                result_coefficients[i + j] += self.coefficients[i] * other.coefficients[j]
        return Polynomial(result_coefficients)

    def __str__(self):
        terms = []
        for i, coefficient in enumerate(self.coefficients):
            if coefficient != 0:
                term = ""
                if coefficient != 1 or i == 0:
                    term += str(coefficient)
                if i > 0:
                    term += "x"
                    if i > 1:
                        term += "^" + str(i)
                terms.append(term)
        return " + ".join(terms).replace("+ -", "- ")

# Test the Polynomial class
p1 = Polynomial([1, 2, 3])
p2 = Polynomial([4, 5, 6])

print("Polynomial 1:", p1)
print("Polynomial 2:", p2)
print("Polynomial 1 + Polynomial 2:", p1 + p2)
print("Polynomial 1 - Polynomial 2:", p1 - p2)
print("Polynomial 1 * Polynomial 2:", p1*p2)
