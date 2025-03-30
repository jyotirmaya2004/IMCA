class complex:
    def __init__(self):
        self.real=int(input("Enter real value : "))
        self.imag=int(input("Enter imaginary value : "))
    def __add__(self,other):
        return(self.real+other.real,self.imag+other.imag)
c1=complex()
c2=complex()
print(c1+c2)