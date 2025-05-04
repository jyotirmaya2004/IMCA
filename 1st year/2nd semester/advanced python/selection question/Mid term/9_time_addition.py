class time:
    def __init__(self,hours,minutes,seconds):
        self.h = hours
        self.m = minutes
        self.s = seconds
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
def take_input():
    h = int(input("Enter hours : "))
    m = int(input("Enter minutes : "))
    s = int(input("Enter seconds : "))
    return h,m,s

print("\nEnter 1st time \n")
h1,m1,s1=take_input()
t1=time(h1,m1,s1)
print("\nEnter 2nd time\n ")
h2,m2,s2=take_input()
t2=time(h2,m2,s2)
h,m,s=t1+t2
print("\nSum of times:")
print(f"Hour : Minute : Second = {h} : {m} : {s}")