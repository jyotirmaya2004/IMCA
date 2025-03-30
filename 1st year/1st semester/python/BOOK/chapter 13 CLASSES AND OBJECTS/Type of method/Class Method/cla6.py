class Employee:
    total_employees = 0

    def __init__(self):
        Employee.add_employee()

    @classmethod
    def add_employee(cls):
        cls.total_employees += 1

e1 = Employee()
e2 = Employee()
e3 = Employee()
print(Employee.total_employees)  # Output: 3
