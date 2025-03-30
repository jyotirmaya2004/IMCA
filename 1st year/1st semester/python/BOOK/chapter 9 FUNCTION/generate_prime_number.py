#generate prime number
def prime(n):
    x=1
    for i in range(2,n):
        if n%i==0 :
            x=0
            break
        else:
            x=1
    return x
num=int(input("How many primes do you want ? "))
i=2
c=1
while c<=num:
    t=prime(i)
    if t==1:
        print(i,end=" ")
        c+=1
    i+=1
    # if c>num:
    #     break