from abc import ABC, abstractmethod

class Shape(ABC):
    @abstractmethod
    def area(self):
        pass

class Square(Shape):
    def __init__(self, side):
        self.side = side

    def area(self):
        return self.side ** 2

class Triangle(Shape):
    def __init__(self, base, height):
        self.base = base
        self.height = height

    def area(self):
        return 0.5 * self.base * self.height

sq = Square(4)
tr = Triangle(5, 6)
print(f"Square Area: {sq.area()}")  # 16
print(f"Triangle Area: {tr.area()}")  # 15
