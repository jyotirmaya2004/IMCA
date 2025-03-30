class Shape:
    @classmethod
    def from_type(cls, shape_type):
        if shape_type == "Circle":
            return cls()
        elif shape_type == "Square":
            return cls()
        else:
            return None

shape1 = Shape.from_type("Circle")
shape2 = Shape.from_type("Square")
print(shape1, shape2)  # Output: <__main__.Shape object at ...> <__main__.Shape object at ...>
