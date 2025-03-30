def square(x):
    return x*x
f= lambda x:x*x
print(f(3))
print(square(5))

max1=lambda x,y:x if x>y else y
a,b=[int(x)for x in input("Enter two number separiting with comma : ").split(",")]
print("Bigger number is : ",max1(a,b))