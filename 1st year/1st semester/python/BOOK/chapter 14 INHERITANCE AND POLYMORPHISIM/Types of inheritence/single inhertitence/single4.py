#Create a parent class called Person with attributes name and age. Create a child class called Student that inherits from Person and adds an attribute grade. Create an instance of Student and print its attributes.

#Solution

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

class Student(Person):
    def __init__(self, name, age, grade):
        super().__init__(name, age)
        self.grade = grade

my_student = Student("John Doe", 20, "A")
print(my_student.name)
print(my_student.age)
print(my_student.grade)
