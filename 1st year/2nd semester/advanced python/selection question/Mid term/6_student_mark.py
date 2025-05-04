class Student:
	name=""
	roll=0
	mark=0
	def input(self):
		self.name=input("Enter student name : ")
		self.roll=int(input("Enter student roll number : "))
		self.mark=int(input("Enter student mark : "))
	def display(self):
		print("Student Details ")
		print("Name : ",self.name)
		print("Age : ",self.roll)
		print("Mark : ",self.mark)
def larger_mark(ob1,ob2):
	if(ob1.mark>ob2.mark):
		print("student 1 have larger mark than student 2")
	else:
		print("student 2 have larger mark than student 1")
#main
s1=Student()
s2=Student()
s1.input()
s1.display()
s2.input()
s2.display()
larger_mark(s1,s2)