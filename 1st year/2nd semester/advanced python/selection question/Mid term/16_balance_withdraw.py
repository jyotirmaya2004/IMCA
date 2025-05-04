class myexception(Exception):
	def __init__(self, args):
		self.arg=args
def checkbalance(name,bal):
	dict={"A":20000,"B":30000,"C":2300,"D":1239}
	for k,v in dict.items():
		if name == k:
			if v < bal:
				raise myexception("Insufficient balance \nyour current balance =  %.2f"%v)
			else:
				v -= bal
				raise myexception("Your withdrawal process is completed successfully.\nYour current balance: %.2f"%v)
try:
	name=input("Enter your name : ")
	bal=int(input("Enter Amount : "))
	checkbalance(name,bal)
except myexception as e:
	print(e)