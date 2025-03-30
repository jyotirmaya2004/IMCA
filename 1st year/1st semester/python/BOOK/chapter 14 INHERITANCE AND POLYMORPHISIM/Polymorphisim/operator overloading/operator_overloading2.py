class MagicDemo:
    def __init__(self, value):
        self.value = value

    # String Representations
    def __str__(self):
        return f"MagicDemo({self.value})"

    def __repr__(self):
        return f"MagicDemo({self.value})"

    # Arithmetic Operators
    def __add__(self, other):
        return MagicDemo(self.value + other.value)

    def __sub__(self, other):
        return MagicDemo(self.value - other.value)

    def __mul__(self, other):
        return MagicDemo(self.value * other.value)

    def __truediv__(self, other):
        return MagicDemo(self.value / other.value)

    def __floordiv__(self, other):
        return MagicDemo(self.value // other.value)

    def __mod__(self, other):
        return MagicDemo(self.value % other.value)

    def __pow__(self, other):
        return MagicDemo(self.value ** other.value)

    # Comparison Operators
    def __eq__(self, other):
        return self.value == other.value

    def __ne__(self, other):
        return self.value != other.value

    def __lt__(self, other):
        return self.value < other.value

    def __le__(self, other):
        return self.value <= other.value

    def __gt__(self, other):
        return self.value > other.value

    def __ge__(self, other):
        return self.value >= other.value

    # Unary Operators
    def __neg__(self):
        return MagicDemo(-self.value)

    def __pos__(self):
        return MagicDemo(+self.value)

    def __abs__(self):
        return MagicDemo(abs(self.value))

    # Bitwise Operators
    def __and__(self, other):
        return MagicDemo(self.value & other.value)

    def __or__(self, other):
        return MagicDemo(self.value | other.value)

    def __xor__(self, other):
        return MagicDemo(self.value ^ other.value)

    def __lshift__(self, other):
        return MagicDemo(self.value << other.value)

    def __rshift__(self, other):
        return MagicDemo(self.value >> other.value)

    # Length & Indexing
    def __len__(self):
        return len(str(self.value))  # Returns the number of digits

    def __getitem__(self, index):
        return str(self.value)[index]  # Returns digit at index

    # Type Conversion
    def __int__(self):
        return int(self.value)

    def __float__(self):
        return float(self.value)

# Creating objects
a = MagicDemo(10)
b = MagicDemo(3)

# Arithmetic Operations
print(a + b)  # MagicDemo(13)
print(a - b)  # MagicDemo(7)
print(a * b)  # MagicDemo(30)
print(a / b)  # MagicDemo(3.3333...)
print(a // b)  # MagicDemo(3)
print(a % b)  # MagicDemo(1)
print(a ** b)  # MagicDemo(1000)

# Comparison Operations
print(a == b)  # False
print(a != b)  # True
print(a > b)  # True
print(a < b)  # False
print(a >= b)  # True
print(a <= b)  # False

# Unary Operators
print(-a)  # MagicDemo(-10)
print(+b)  # MagicDemo(3)
print(abs(MagicDemo(-7)))  # MagicDemo(7)

# Bitwise Operations
print(a & b)  # MagicDemo(2)
print(a | b)  # MagicDemo(11)
print(a ^ b)  # MagicDemo(9)
print(a << b)  # MagicDemo(80)
print(a >> b)  # MagicDemo(1)

# Length & Indexing
print(len(a))  # 2 (since "10" has 2 digits)
print(a[0])  # '1' (first digit of "10")

# Type Conversion
print(int(a))  # 10
print(float(a))  # 10.0
