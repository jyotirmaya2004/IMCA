class Student:
	name=""
	roll=0
	mark=0
	def __init__(self,name,roll,mark):
		self.name=name
		self.roll=roll
		self.mark=mark
	def display(self):
		print("Student Details ")
		print("Name : ",self.name)
		print("Age : ",self.roll)
		print("Mark : ",self.mark)

def take_input():
	name=input("Enter student name : ")
	roll=int(input("Enter student roll number : "))
	mark=int(input("Enter student mark : "))
	return name,roll,mark
def larger_mark(ob1,ob2):
	if(ob1.mark>ob2.mark):
		print("student 1 have larger mark than student 2")
	else:
		print("student 2 have larger mark than student 1")
#main
name1,roll1,mark1=take_input()
s1=Student(name1,roll1,mark1)
name2,roll2,mark2=take_input()
s2=Student(name2,roll2,mark2)
s1.display()
s2.display()
larger_mark(s1,s2)