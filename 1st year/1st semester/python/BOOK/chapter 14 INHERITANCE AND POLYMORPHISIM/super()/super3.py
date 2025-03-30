class Shape:
    def __init__(self, color):
        self.color = color

    def area(self):
        pass

class Rectangle(Shape):
    def __init__(self, color, width, height):
        super().__init__(color)
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height

class Square(Rectangle):
    def __init__(self, color, side):
        super().__init__(color, side, side)

    def area(self):
        return super().area()

square = Square("red", 4)
print(square.area())
