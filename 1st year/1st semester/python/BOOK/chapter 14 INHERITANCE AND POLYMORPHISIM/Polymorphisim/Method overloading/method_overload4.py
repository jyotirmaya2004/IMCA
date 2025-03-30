class Shape:
    def area(self):
        pass

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
        return 3.14 * self.radius ** 2

def calculate_area(shape: Shape):
    return shape.area()

rectangle = Rectangle(4, 5)
circle = Circle(3)

print(calculate_area(rectangle))  # Output: 20
print(calculate_area(circle))  # Output: 28.26
