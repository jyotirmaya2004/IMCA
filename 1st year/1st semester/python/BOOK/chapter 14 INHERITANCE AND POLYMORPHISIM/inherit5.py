class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

class Student(Person):
    def __init__(self, name, age, grade):
        super().__init__(name, age)
        self.grade = grade

    def study(self):
        return f"{self.name} is studying and is in grade {self.grade}."

student = Student("Alice", 20, "A")
print(student.study())  # Output: Alice is studying and is in grade A.
