#Create a parent class called Shape with a method area() that calculates the area of a shape. Create a child class called Rectangle that inherits from Shape and overrides the area() method to calculate the area of a rectangle. Create an instance of Rectangle and call its area() method.

#Solution

class Shape:
    def area(self):
        pass

class Rectangle(Shape):
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height

my_rectangle = Rectangle(4, 5)
print(my_rectangle.area())

