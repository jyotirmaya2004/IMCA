class Employee:
    def __init__(self, name, salary):
        self.name = name
        self.salary = salary

class Manager(Employee):
    def __init__(self, name, salary, bonus):
        super().__init__(name, salary)
        self.bonus = bonus

    def total_compensation(self):
        return self.salary + self.bonus
    
name =input("Enter employee name : ")
salary =float(input("Enter Salary : "))
Bonus =float(input("Enter Bonus : "))
manager = Manager(name, salary, Bonus)
print("Total Compensation : ₹ %.2f"%manager.total_compensation())  # Output: 90000
