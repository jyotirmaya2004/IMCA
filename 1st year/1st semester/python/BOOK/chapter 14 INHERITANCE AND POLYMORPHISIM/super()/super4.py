from abc import *
class AbstractShape(ABC):
    @abstractmethod
    def area(self):
        pass

class Shape(AbstractShape):
    def __init__(self, color):
        self.color = color

    def area(self):
        pass

class Circle(Shape):
    def __init__(self, color, radius):
        super().__init__(color)
        self.radius = radius

    def area(self):
        return 3.14 * self.radius ** 2

circle = Circle("blue", 5)
print(circle.area())


