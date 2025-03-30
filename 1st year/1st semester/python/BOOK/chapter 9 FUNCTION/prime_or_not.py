def prime(n):
    x=1
    for i in range(2,n):
        if n%i==0 :
            x=0
            break
        else:
            x=1
    return x
num=int(input("Enter a number : "))
p=prime(num)
if num==1:
    print(f"{num} is a special number")
elif p==1:
    print(f"{num} is a prime number ")
else:
    print(f"{num} is not a prime number ")