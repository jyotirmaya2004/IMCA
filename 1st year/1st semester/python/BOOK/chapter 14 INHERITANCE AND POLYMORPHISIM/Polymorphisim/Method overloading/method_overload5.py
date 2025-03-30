class Shape:
    def calculate_area(self, *args):
        if len(args) == 1:  # Circle
            return self._calculate_circle_area(args[0])
        elif len(args) == 2:  # Rectangle
            return self._calculate_rectangle_area(args[0], args[1])
        elif len(args) == 3:  # Triangle
            return self._calculate_triangle_area(args[0], args[1], args[2])
        else:
            raise ValueError("Invalid arguments")

    def _calculate_circle_area(self, radius):
        return 3.14 * radius ** 2

    def _calculate_rectangle_area(self, length, width):
        return length * width

    def _calculate_triangle_area(self, base, height, side):
        return 0.5 * base * height

class Circle(Shape):
    def calculate_area(self, radius):
        return super().calculate_area(radius)

class Rectangle(Shape):
    def calculate_area(self, length, width):
        return super().calculate_area(length, width)

class Triangle(Shape):
    def calculate_area(self, base, height, side):
        return super().calculate_area(base, height, side)

# Create objects
circle = Circle()
rectangle = Rectangle()
triangle = Triangle()

# Calculate areas
print(circle.calculate_area(5))  # Output: 78.5
print(rectangle.calculate_area(4, 5))  # Output: 20
print(triangle.calculate_area(3, 4, 5))  # Output: 6.0

