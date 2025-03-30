print("Enter two number ")
a=(int(input()))
b=(int(input()))
i=1
while(i<=a and i<=b):
    if(a%i==0 and b%i==0):
        g=i
    i+=1
print("GCD of",a,"and",b,"is",g)
j=a*b
while(j>=a and j>=b):
    if(j%a==0 and j%b==0):
        l=j
    j-=1
print("LCM of",a,"and",b,"is",l)
