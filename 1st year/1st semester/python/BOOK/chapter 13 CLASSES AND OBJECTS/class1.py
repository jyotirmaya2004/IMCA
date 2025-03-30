class Student:
    def __init__(self):  # Constructor to initialize instance variables
        self.name = "Jyoti"
        self.age = 21
        self.marks = 529

    def talk(self):  # Method to print student details
        print("Hi, I am", self.name)
        print("My age is", self.age)
        print("My marks are", self.marks)

# Creating an object of the Student class
s1 = Student()

# Calling the talk() method to display student details
s1.talk()
