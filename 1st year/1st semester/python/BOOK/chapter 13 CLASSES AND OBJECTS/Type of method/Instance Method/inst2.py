class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def update_age(self, new_age):
        self.age = new_age

p1 = Person("Bob", 30)
p1.update_age(35)
print(p1.age)  # Output: 35
