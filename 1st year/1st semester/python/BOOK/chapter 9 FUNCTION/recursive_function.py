#recursive function to calculate factorial
def factorial(n):
    if n==0:
        result=1
    else:
        result=n*factorial(n-1)
    return(result)
x=int(input("Enter a number : "))
print(f"Factorial of {x} is : ",factorial(x))