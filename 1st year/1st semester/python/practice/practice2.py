#factorial number 
num =int(input("Enter a number : "))
fact=1
for i in range(1,num+1):
    fact*=i
print("Factorial of ",num,"is ",fact)
#method 2
num =int(input("Enter a number : "))
num1=num
for i in range(1,num):
    num*=i
print("Factorial of ",num1,"is ",num)