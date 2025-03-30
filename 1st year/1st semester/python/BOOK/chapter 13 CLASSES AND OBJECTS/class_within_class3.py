class Shape:
    def __init__(self, color):
        self.color = color

    class Rectangle:
        def __init__(self, width, height):
            self.width = width
            self.height = height

        def area(self):
            return self.width * self.height

    class Circle:
        def __init__(self, radius):
            self.radius = radius

        def area(self):
            return 3.14 * self.radius ** 2

    def display(self, shape_type):
        if shape_type == "rectangle":
            rectangle = self.Rectangle(4, 5)
            print("Rectangle area:", rectangle.area())
        elif shape_type == "circle":
            circle = self.Circle(3)
            print("Circle area:", circle.area())

shape = Shape("red")
shape.display("rectangle")
shape.display("circle")

