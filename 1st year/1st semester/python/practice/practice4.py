#find gcd
def gcd(a,b):
    while a!=b:
        if a>b :
            a=a-b
        else:
            b=b-a
    return a

def lcm(a,b):
    return (a*b)//gcd(a,b)

num1=int(input("Enter first number : "))
num2=int(input("Enter second number : "))
result= gcd(num1,num2)
print("The gcd of two number is ",result)
result2=lcm(num1,num2)
print("The lcm of two number is ",result2)