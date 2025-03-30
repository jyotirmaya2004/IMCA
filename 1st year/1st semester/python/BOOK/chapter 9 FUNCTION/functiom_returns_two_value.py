def sum(a,b):
    c=a+b
    d=a-b
    return c,d
m=int(input("Enter first number : "))
n=int(input("Enter second number : "))
x,y=sum(m,n)
print(f"A+B= {x}")
print(f"A-B= {y}")