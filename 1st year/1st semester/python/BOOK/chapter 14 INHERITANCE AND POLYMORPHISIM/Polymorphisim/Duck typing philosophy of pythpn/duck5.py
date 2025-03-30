class Integer:
    def __init__(self, value):
        self.value = value

    def __add__(self, other):
        return Integer(self.value + other.value)

class Float:
    def __init__(self, value):
        self.value = value

    def __add__(self, other):
        return Float(self.value + other.value)

def add_numbers(a, b):
    return a + b

integer = Integer(5)
float_num = Float(3.5)

result = add_numbers(integer, float_num)
print(result.value)  # Output: 8.5
