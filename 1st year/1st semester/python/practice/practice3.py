#armstrong number
num=int(input("Enter a number : "))
num1=num
count=0
while num>0:
    dg=num%10
    count+=1
    num//=10
num=num1
new=0
while num>0:
    dg=num%10
    dg2=1
    for i in range(count):
        dg2 *= dg
    new += dg2
    num//=10

print(new)
if num1==new:
    print("Armstrong number")
else :
    print("Not a armstrong number")