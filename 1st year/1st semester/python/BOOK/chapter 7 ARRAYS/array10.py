#sorting an array using bubble sort technique
from array import *
str=input("Enter element using space  : ").split(" ")
list=[int(i) for i in str]
x=array('i',list)
n=len(str)

for i in range(0,n):
    for j in range(0,n):
        if x[i]<x[j]:
            temp=x[i]
            x[i]=x[j]
            x[j]=temp
print("Sorted array : ",x)