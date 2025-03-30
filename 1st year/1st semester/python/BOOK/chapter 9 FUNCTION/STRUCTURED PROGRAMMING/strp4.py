class Employee:
    def __init__(self, emp_id, name, basic_salary):
        self.emp_id = emp_id
        self.name = name
        self.basic_salary = basic_salary

    def calculate_salary(self):
        hra = self.basic_salary * 0.20  # House Rent Allowance
        da = self.basic_salary * 0.10   # Dearness Allowance
        pf = self.basic_salary * 0.08   # Provident Fund Deduction
        gross_salary = self.basic_salary + hra + da
        net_salary = gross_salary - pf
        return net_salary

    def display_salary(self):
        print(f"Employee: {self.name}, Net Salary: ${self.calculate_salary():.2f}")

# Employee details
emp1 = Employee(101, "Alice", 5000)
emp2 = Employee(102, "Bob", 7000)

# Displaying salaries
emp1.display_salary()
emp2.display_salary()
