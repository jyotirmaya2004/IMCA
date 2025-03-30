n=(int(input("Enter any number : ")))
for i in range(2,n):
    if(n%i==0):
        break    
if(n==1):
    print(n,"is a special number")
elif(n==2):
    print(n,"is a prime number")
elif(i==n-1):
    print(n,"is a prime number")
elif(i<n-1):
    print(n,"is a composite number")
else:
    print("Enter a valid number")

