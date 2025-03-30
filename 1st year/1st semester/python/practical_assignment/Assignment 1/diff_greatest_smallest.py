print("Enter three number ",end=":")
a=(float(input()))
b=(float(input()))
c=(float(input()))
print("your entered numbers are : ",a,b,c)
if(a>b):
    if(a>c):
        print(a,"is the greatest number")
        g=a
    else:
        print(c,"is the greatest number")
        g=c
elif(b>a):
    if(b>c):
        print(b,"is the greatest number")
        g=b
    else:
        print(c,"is the greatest number")
        g=c

if(a>b):
    if(c>b):
        print(b,"is the smallest number")
        s=b
    else:
        print(c,"is the smallest number")
        s=c
elif(b>a):
    if(c>a):
        print(a,"is the smallest number")
        s=a
    else:
        print(c,"is the smallest number")
        s=c
print("The differnce between greatest and smallest : ",g-s)