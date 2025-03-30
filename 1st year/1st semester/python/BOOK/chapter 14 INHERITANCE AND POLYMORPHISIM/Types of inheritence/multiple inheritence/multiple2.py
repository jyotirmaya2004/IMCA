"""Create a class hierarchy with multiple inheritance to represent the following relationships:

- A Shape can be either a TwoDimensionalShape or a ThreeDimensionalShape.
- A TwoDimensionalShape can be either a Circle, a Rectangle, or a Triangle.
- A ThreeDimensionalShape can be either a Sphere, a Cube, or a Cone.
- A Circle, a Rectangle, and a Triangle are all types of TwoDimensionalShape.
- A Sphere, a Cube, and a Cone are all types of ThreeDimensionalShape.

Create classes for each of these types and use multiple inheritance to establish the relationships between them. Then, create an instance of each class and print out its area or volume.

Solution"""

import math

class Shape:
    def __init__(self):
        pass

class TwoDimensionalShape(Shape):
    def __init__(self):
        super().__init__()

class ThreeDimensionalShape(Shape):
    def __init__(self):
        super().__init__()

class Circle(TwoDimensionalShape):
    def __init__(self, radius):
        super().__init__()
        self.radius = radius

    def area(self):
        return math.pi * self.radius ** 2

class Rectangle(TwoDimensionalShape):
    def __init__(self, width, height):
        super().__init__()
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height

class Triangle(TwoDimensionalShape):
    def __init__(self, base, height):
        super().__init__()
        self.base = base
        self.height = height

    def area(self):
        return 0.5 * self.base * self.height

class Sphere(ThreeDimensionalShape):
    def __init__(self, radius):
        super().__init__()
        self.radius = radius

    def volume(self):
        return (4/3) * math.pi * self.radius ** 3

class Cube(ThreeDimensionalShape):
    def __init__(self, side):
        super().__init__()
        self.side = side

    def volume(self):
        return self.side ** 3

class Cone(ThreeDimensionalShape):
    def __init__(self, radius, height):
        super().__init__()
        self.radius = radius
        self.height = height

    def volume(self):
        return (1/3) * math.pi * self.radius ** 2 * self.height

# Create instances
circle = Circle(5)
rectangle = Rectangle(4, 5)
triangle = Triangle(3, 4)
sphere = Sphere(6)
cube = Cube(7)
cone = Cone(8, 9)

# Print areas and volumes
print("Circle area:", circle.area())
print("Rectangle area:", rectangle.area())
print("Triangle area:", triangle.area())
print("Sphere volume:", sphere.volume())
print("Cube volume:", cube.volume())
print("Cone volume:", cone.volume())
