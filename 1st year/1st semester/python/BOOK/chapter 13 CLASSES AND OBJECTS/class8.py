class Student:
    def __init__(self, name, grade):
        self.name = name
        self._grade = grade  # Private attribute

    def get_grade(self):
        return self._grade

    def set_grade(self, grade):
        if 0 <= grade <= 100:
            self._grade = grade
        else:
            print("Invalid grade. Must be between 0 and 100.")

student1 = Student("John", 85)
print(f"Initial Grade: {student1.get_grade()}")
student1.set_grade(90)
print(f"Updated Grade: {student1.get_grade()}")
student1.set_grade(105)  # Invalid case
