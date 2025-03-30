n=(int(input("Enter a number : ")))
new=0
n1=n
while n!=0:
    num=n%10
    new=new*10+num
    n//=10
if n1==new:
    print("%d is a palindorme number \n"%n1)
else:
    print("%d is not a palindorme number \n"%n1)


    
