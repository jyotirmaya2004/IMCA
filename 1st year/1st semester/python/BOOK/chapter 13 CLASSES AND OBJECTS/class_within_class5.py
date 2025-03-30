class University:
    def __init__(self, name):
        self.name = name
        self.departments = []

    class Department:
        def __init__(self, name, head):
            self.name = name
            self.head = head
            self.courses = []

        class Course:
            def __init__(self, name, credits):
                self.name = name
                self.credits = credits
                self.students = []

            def add_student(self, student):
                self.students.append(student)

            def display(self):
                print("Course Name:", self.name)
                print("Credits:", self.credits)
                print("Students:")
                for student in self.students:
                    print(student.name)

        def add_course(self, course):
            self.courses.append(course)

        def display(self):
            print("Department Name:", self.name)
            print("Head of Department:", self.head)
            print("Courses:")
            for course in self.courses:
                course.display()

    def add_department(self, department):
        self.departments.append(department)

    def display(self):
        print("University Name:", self.name)
        print("Departments:")
        for department in self.departments:
            department.display()

# Create a university
university = University("Utkal University")

# Create departments
cs_department = university.Department("Computer Science", "Dr. Smith")
math_department = university.Department("Mathematics", "Dr. Johnson")

# Create courses
cs_course = cs_department.Course("Data Structures", 3)
math_course = math_department.Course("Calculus", 4)

# Add students to courses
class Student:
    def __init__(self, name):
        self.name = name

cs_course.add_student(Student("John Doe"))
cs_course.add_student(Student("Jane Doe"))
math_course.add_student(Student("Bob Smith"))

# Add courses to departments
cs_department.add_course(cs_course)
math_department.add_course(math_course)

# Add departments to university
university.add_department(cs_department)
university.add_department(math_department)

# Display university
university.display()

