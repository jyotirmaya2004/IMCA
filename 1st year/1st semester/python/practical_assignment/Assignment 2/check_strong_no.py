num=(int(input("Enter any number :n ")))
sum=0
num1=num
while(num>0):
    dg=num%10
    num=num//10
    fact=1
    for i in range(1,dg+1,1):
        fact=fact*i
    sum=sum+fact
    # print(dg)
if(num1==sum):
    print(sum,"is a strong number")
else:
    print(sum,"is not a strong number")
    