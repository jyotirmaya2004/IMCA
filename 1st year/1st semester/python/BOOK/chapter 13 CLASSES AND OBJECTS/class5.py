class Employee:
    company = "Google"  # Class variable (shared by all instances)

    def __init__(self, name, salary):
        self.name = name   # Instance variable
        self.salary = salary  # Instance variable

    def show_details(self):
        print(f"Employee: {self.name}, Salary: {self.salary}, Company: {Employee.company}")

# Creating objects
e1 = Employee("Alice", 50000)
e2 = Employee("Bob", 60000)

e1.show_details()
e2.show_details()

# Modifying the class variable
Employee.company = "Microsoft"

print("\nAfter Changing Class Variable:")
e1.show_details()
e2.show_details()
