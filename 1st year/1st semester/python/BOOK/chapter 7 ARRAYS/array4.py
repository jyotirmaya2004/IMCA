from array import *
arr= array('i',[10,23,34,23,45,3])
#find nuber of elements in the array
n= len(arr)
print("the number of elements in array : ",+(n))
print("the elements in the array : ",end=" ")
# for i in arr :
#     print(i,end=" ")
for i in range(n):
    print(arr[i],end=" ")