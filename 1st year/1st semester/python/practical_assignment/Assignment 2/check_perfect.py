sum=0
i=1
a=(int(input("Enter any number : ")))
a1=a
while a>i:
    if(a%i==0):
        sum+=i
        i+=1
    else:
        i+=1
if(sum==a1):
    print(a1,"is a perfect number\n")
else:
    print(a1,"is not a perfect number\n")
