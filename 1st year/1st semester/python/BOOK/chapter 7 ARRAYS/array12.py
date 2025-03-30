from array import *
n=int(input("Enter number of input : "))
x=array('i',[])
print("Enter element to the array : ")
for i in range(n):
    print(f"Enter Element {i+1} : ",end="")
    x.append(int(input()))
print("Display : ",x)
print("Enter element to search : ",end="")
s=int(input())
count=0
for i in range(n):
    if x[i]==s:
        print("Found at position :",i+1)
        count+=1
if count==0:
    print("Not found in the array")
else:
    print("No of element found :",count)