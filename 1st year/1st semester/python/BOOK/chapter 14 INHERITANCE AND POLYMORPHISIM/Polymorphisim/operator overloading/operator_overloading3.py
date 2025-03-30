class MagicDemo:
    def __init__(self, value):
        self.value = value

    def __str__(self):
        return f"MagicDemo({self.value})"

    # Bitwise Operators Overloading
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

# Creating objects
a = MagicDemo(10)  # 10 in binary: 1010
b = MagicDemo(3)   # 3 in binary:  0011

# Performing Bitwise Operations
print(a & b)   # Bitwise AND: 1010 & 0011 → 0010 (2)
print(a | b)   # Bitwise OR:  1010 | 0011 → 1011 (11)
print(a ^ b)   # Bitwise XOR: 1010 ^ 0011 → 1001 (9)
print(a << b)  # Left Shift:  1010 << 3  → 1010000 (80)
print(a >> b)  # Right Shift: 1010 >> 3  → 0001 (1)
