class Student:
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks

    def update_marks(self, new_marks):
        self.marks = new_marks

    def show_details(self):
        print(f"Student: {self.name}, Marks: {self.marks}")

s1 = Student("John", 85)
s1.update_marks(90)
s1.show_details()
