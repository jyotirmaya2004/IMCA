#sorting an array using bubble sort technique
from array import *
n=int(input("Enter number of input : "))
x=array('i',[])
print("Enter element to the array : ")
for i in range(n):
    x.append(int(input()))

for i in range(0,n):
    for j in range(0,n):
        if x[i]<x[j]:
            temp=x[i]
            x[i]=x[j]
            x[j]=temp
print("Sorted array : ",x)