class complex:
    def __init__(self,real,imag):
        self.real=real
        self.imag=imag
    def __add__(self,other):
        return(self.real+other.real,self.imag+other.imag)
    def display(self):
        print(f"The addition of two complex number{self.real}+{self.imag}i")
    
def get_input():
    real = int(input("Enter real value : "))
    imag = int(input("Enter imaginary value : "))
    return real, imag

real1, imag1 = get_input()
c1 = complex(real1, imag1)

real2, imag2 = get_input()
c2 = complex(real2, imag2)
c3=complex(0,0)
c3=c1+c2
print(c3)
c3 = complex(c3[0], c3[1])
c3.display()