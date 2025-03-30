def fact(n):
    prod=1
    while n>=1:
        prod*=n
        n-=1
    return prod
num=int(input("Enter a number to factorial : "))
x=fact(num)
print(f"The factorial of {num} = {x}")