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
try:
    pos=x.index(s)
    print("Fouons at position ",pos+1)
except ValueError:
    print("Not found")