import math

class Shape:
    def area(self):
        return "Area not defined"

class Rectangle(Shape):
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return math.pi * self.radius ** 2

rect = Rectangle(4, 5)
circle = Circle(3)

print(f"Rectangle area: {rect.area()}")  # Output: 20
print(f"Circle area: {circle.area():.2f}")  # Output: 28.27
