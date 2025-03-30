class Department:
    def __init__(self, name, head):
        self.name = name
        self.head = head

    def display(self):
        print("Department Name:", self.name)
        print("Head of Department:", self.head)

class University:
    def __init__(self, name):
        self.name = name
        self.departments = []

    def add_department(self, department):
        self.departments.append(department)

    def display_departments(self):
        print("University Name:", self.name)
        for department in self.departments:
            department.display()
            print()

# Create a university
university = University("Example University")

# Create departments
cs_department = Department("Computer Science", "Dr. Smith")
math_department = Department("Mathematics", "Dr. Johnson")

# Add departments to the university
university.add_department(cs_department)
university.add_department(math_department)

# Display university and departments
university.display_departments()


