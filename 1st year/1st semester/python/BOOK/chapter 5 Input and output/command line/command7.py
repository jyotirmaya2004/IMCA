import sys
args=sys.argv[1:]
print("The argumanets are : ",args)
sum=0
print("The even numbers are : ",end=" ")
for i in args:
    x=int(i)
    if x%2==0:
        print(x,end=" ")
        sum+=x
print("\nSum of even numbers are : ",sum)