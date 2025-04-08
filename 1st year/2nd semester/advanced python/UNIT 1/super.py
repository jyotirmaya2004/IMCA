class A:
	a=0
	def __init__(self,a):
		self.a=a
class B(A):
	b=0
	def __init__(self, a,b):
		super().__init__(a)
		self.b=b
class C:
	c=0
	def __init__(self,c):
		self.c=c
class D(B,C):
	d=0
	def __init__(self, a, b,c,d):
		B.__init__(self,a, b)
		C.__init__(self,c)
		self.d=d
	def display(self):
		print("A= ",self.a)
		print("B= ",self.b)
		print("C= ",self.c)
		print("D= ",self.d)

#main
b1=D(23,34,54,32)
b1.display()