class Student:
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks

    def show(self):
        print(f"Student Name: {self.name}, Marks: {self.marks}")

# Creating multiple objects
s1 = Student("John", 85)
s2 = Student("Emma", 92)

s1.show()
s2.show()
