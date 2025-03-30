from array import *
arr= array('i',[10,23,34,23,45,3])
#find nuber of elements in the array
n= len(arr)
print("the number of elements in array : ",+(n))
print("the elements in the array : ",end=" ")
i=0
while i<n:
    print(arr[i],end=" ")
    i+=1