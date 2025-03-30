class Grandparent:
    def method(self):
        print("Grandparent method")

class Parent(Grandparent):
    def method(self):
        print("Parent method")

class Child(Parent):
    def method(self):
        print("Child method")

child = Child()
child.method()  # Output: Child method
