class Shape:
    def area(self, length, width):
        print("Calculating area of shape...")

class Rectangle(Shape):
    def area(self, length, width):
        return length * width

rectangle = Rectangle()
print(rectangle.area(4, 5))  # Output: 20

