class myexception(Exception):
	def __init__(self,args):
		self.arg=args
def validateAge(age):
	if age<18:
		raise myexception("Age must be 18")
	else:
		print("you are elegible")
try:
	age=int(input("Enter your age : "))
	validateAge(age)
except myexception as e:
	print(e)
