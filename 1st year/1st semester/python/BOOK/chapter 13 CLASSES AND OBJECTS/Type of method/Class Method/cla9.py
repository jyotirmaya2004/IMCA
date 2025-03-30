class Student:
    school_name = "Greenwood High"  # Class variable

    @classmethod
    def change_school(cls, new_school):
        cls.school_name = new_school

print(Student.school_name)  # Output: Greenwood High
Student.change_school("Oakridge School")
print(Student.school_name)  # Output: Oakridge School
