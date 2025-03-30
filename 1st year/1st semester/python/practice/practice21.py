class time:
    def __init__(self):
        self.h = int(input("Enter hours : "))
        self.m = int(input("Enter minutes : "))
        self.s = int(input("Enter seconds : "))
    def __add__(self,other):
        h=self.h+other.h
        m=self.m+other.m
        if(m>=60):
            n=m//60
            m=m-(n*60)
            h+=n
        s=self.s+other.s
        if(s>=60):
            n=s//60
            s=s-(n*60)
            m+=n
        return h,m,s
print("\nEnter 1st time \n")
t1=time()
print("\nEnter 2nd time\n ")
t2=time()
h,m,s=t1+t2
print("\nSum of times:")
print(f"Hour : Minute : Second = {h} : {m} : {s}")