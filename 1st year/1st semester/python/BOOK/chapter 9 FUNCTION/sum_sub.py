#returning multiple values from a function
def result(a,b):
    c=a+b
    d=a-b
    e=a*b
    f=a//b
    return c,d,e,f
#x,y=(input("Enter two number using space : ").split())
x,y=map(int,input("Enter two number using space : ").split())
sum,sub,mult,div = result(x,y)
print(f"\tSum = {sum}\n\tSubstraction = {sub}\n\tMultiplication : {mult}\n\tDivivsion = {div}")