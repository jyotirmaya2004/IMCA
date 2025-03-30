class EMP:
    def __init__(self,id,name,salary):
        self.id=id
        self.name=name
        self.salary=salary
    def display(self):
        print("Id :-",self.id)
        print("Name :-",self.name)
        print("Salary :-",self.salary)
        
class Myclass:
    age=23
    @staticmethod
    def mymethod(emp):
        emp.salary+=1000
        emp.display()
e = EMP(1, "John", 5000)
Myclass.mymethod(e)