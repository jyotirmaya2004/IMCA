class OuterClass:
    def __init__(self, name):
        self.name = name

    class InnerClass:
        def __init__(self, age):
            self.age = age

        def display(self):
            print("Age:", self.age)

    def display(self):
        print("Name:", self.name)
        inner_obj = self.InnerClass(30)
        inner_obj.display()

# Create an object of the outer class
outer_obj = OuterClass("John")

# Call the display method of the outer class
outer_obj.display()

