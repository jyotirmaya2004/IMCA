class Parent:
    x = 10  # class attribute

    def __init__(self):
        self.y = 20  # instance attribute

class Child(Parent):
    x = 30  # hides Parent.x
    z = 40  # class attribute

    def __init__(self):
        super().__init__()
        self.y = 50  # hides Parent.y

child = Child()
print(child.x)  # 30 (Child.x)
print(child.y)  # 50 (Child.y)
print(child.z)  # 40 (Child.z)
print(Parent.x)  # 10 (Parent.x)
print(child.__dict__)  # {'y': 50} (instance namespace)
print(Child.__dict__)  # {'__module__': ..., 'x': 30, 'z': 40, ...} (class namespace)
