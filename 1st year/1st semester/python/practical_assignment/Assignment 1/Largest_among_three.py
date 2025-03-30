print("Enter three number ",end=":")
a=(int(input()))
b=(int(input()))
c=(int(input()))
print("your entered numbers are : ",a,b,c)
if(a>b):
    if(a>c):
        print(a,"is the greatest number")
    else:
        print(c,"is the greatest number")
elif(b>a):
    if(b>c):
        print(b,"is the greatest number")
    else:
        print(c,"is the greatest number")
